import rclpy
import numpy as np
import cv2
import cv2.aruco as aruco
import math

from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge, CvBridge, CvBridgeError

class Recon(Node):
    def __init__(self):
        super().__init__('Recon')
        self.subscription = self.create_subscription(Image, 'image_raw', self.spycam_callback)
        self.subscription
        self.camera_matrix = np.array([[491.18464083,  0.0, 348.98983317], [0.0, 473.157124, 198.89661869], [0.0, 0.0, 1.0]])
        self.distortion_coeffs = np.array([ 0.0629139 , -0.18878096 , 0.00093055 , 0.00734084 , 0.10125675])
        self.R_flip  = np.zeros((3,3), dtype=np.float32)
        self.R_flip[0,0] = 1.0
        self.R_flip[1,1] =-1.0
        self.R_flip[2,2] =-1.0
        self.bridge = CvBridge()
        
        def spycam_callback(self, msg):
            try:
                cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
                gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
                aruco_dict = aruco.Dictionary_get(aruco.DICT_4X4_250)
                parameters = aruco.DetectorParameters_create()
                parameters.adaptiveThreshConstant = 10
                corners, ids, rejectedImgPoints = aruco.detectMarkers(gray_image, aruco_dict, parameters=parameters)
                font = cv2.FONT_HERSHEY_SIMPLEX

                if np.all(ids != None):
                    aruco.drawDetectedMarkers(cv_image, corners)
                    strg = ''
                    for i in range(0, ids.size):
                        strg += str(ids[i][0])+', '

                    cv2.putText(cv_image, "Id: " + strg, (0,64), font, 1, (0,255,0),2,cv2.LINE_AA)
                    id2 = ids.flatten()
                    for (markerCorner, markerID) in zip(corners, id2):
                        corners = markerCorner.reshape((4, 2))
                        (topLeft, topRight, bottomRight, bottomLeft) = corners
                        topRight = (int(topRight[0]), int(topRight[1]))
                        topRight = (int(topRight[0]), int(topRight[1]))
                        bottomRight = (int(bottomRight[0]), int(bottomRight[1]))
                        bottomLeft = (int(bottomLeft[0]), int(bottomLeft[1]))
                        topLeft = (int(topLeft[0]), int(topLeft[1]))
                        cX = int((topLeft[0] + bottomRight[0]) / 2.0)
                        cY = int((topLeft[1] + bottomRight[1]) / 2.0)
                        print("ID: ", markerID, "center: (", cX, ", ", cY, ")")

                    rvec, tvec ,_ = aruco.estimatePoseSingleMarkers(corners, 0.09, self.camera_matrix, self.distortion_coeffs)
                    for i in range(0, ids.size):
                        aruco.drawAxis(cv_image, self.camera_matrix, self.distortion_coeffs, rvec[i], tvec[i], 0.1)
                        R_ct    = np.matrix(cv2.Rodrigues(rvec[i])[0])
                        R_tc    = R_ct.T           
                        roll_marker, pitch_marker, yaw_marker = rotationMatrixToEulerAngles(self.R_flip*R_tc)
                        print("ID: ",id2[i], "Yaw : ",  math.degrees(yaw_marker))

                else:
                    # code to show 'No Ids' when no markers are found
                    cv2.putText(cv_image, "No Ids", (0,64), font, 1, (0,255,0),2,cv2.LINE_AA)
                    print("No IDs detected")

                cv2.imshow('frame', cv_image)
            except CvBridgeError as e:
                print(e)


        def isRotationMatrix(self, R):
            Rt = np.transpose(R)
            shouldBeIdentity = np.dot(Rt, R)
            I = np.identity(3, dtype=R.dtype)
            n = np.linalg.norm(I - shouldBeIdentity)
            return n < 1e-6

        def rotationMatrixToEulerAngles(self,R):
            assert (isRotationMatrix(R))

            sy = math.sqrt(R[0, 0] * R[0, 0] + R[1, 0] * R[1, 0])

            singular = sy < 1e-6

            if not singular:
                x = math.atan2(R[2, 1], R[2, 2])
                y = math.atan2(-R[2, 0], sy)
                z = math.atan2(R[1, 0], R[0, 0])
            else:
                x = math.atan2(-R[1, 2], R[1, 1])
                y = math.atan2(-R[2, 0], sy)
                z = 0

            return np.array([x, y, z])

def main(args=None):
    rclpy.init(args=args)
    recon = Recon()
    rclpy.spin(recon)
    recon.destroy_node()
    cv2.destroyAllWindows()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    