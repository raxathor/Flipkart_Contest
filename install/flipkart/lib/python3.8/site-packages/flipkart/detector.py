from operator import truediv
import rclpy
import math
import numpy as np
import cv2
import cv2.aruco as aruco
import math

from rclpy.node import Node
from sensor_msgs.msg import Image
from flipkart_msgs.msg import Pose
from cv_bridge import CvBridge, CvBridgeError

class Recon(Node):
    def __init__(self):
        super().__init__('Recon')
        self.subscription = self.create_subscription(Image, 'image_raw', self.spycam_callback, 10)
        self.subscription
        self.camera_matrix = np.array([[491.18464083,  0.0, 348.98983317], [0.0, 473.157124, 198.89661869], [0.0, 0.0, 1.0]])
        self.distortion_coeffs = np.array([ 0.0629139 , -0.18878096 , 0.00093055 , 0.00734084 , 0.10125675])
        self.R_flip  = np.zeros((3,3), dtype=np.float32)
        self.R_flip[0,0] = 1.0
        self.R_flip[1,1] =-1.0
        self.R_flip[2,2] =-1.0
        self.bridge = CvBridge()

        self.publisher = self.create_publisher(Pose, 'current_pose', 10)
        self.timer_period = 0.033
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.pub_msg = Pose()
        self.prev_id_list = []
        self.first = True
        self.prev_yaw = []

    def timer_callback(self):
        self.publisher.publish(self.pub_msg)
        
    def spycam_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        except CvBridgeError as e:
            print(e)

        gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        aruco_dict = aruco.Dictionary_get(aruco.DICT_4X4_50)
        parameters = aruco.DetectorParameters_create()
        parameters.adaptiveThreshConstant = 7
        parameters.adaptiveThreshWinSizeMin = 3
        parameters.adaptiveThreshWinSizeMax = 23
        parameters.adaptiveThreshWinSizeStep = 10
        parameters.minMarkerPerimeterRate = 0.03
        parameters.maxMarkerPerimeterRate = 4.0
        corners, ids, rejectedImgPoints = aruco.detectMarkers(gray_image, aruco_dict, parameters=parameters)
        font = cv2.FONT_HERSHEY_SIMPLEX
        if np.all(ids != None):
            aruco.drawDetectedMarkers(cv_image, corners)
            strg = ''
            for i in range(0, ids.size):
                strg += str(ids[i][0])+', '

            id_list = []
            x_list = []
            y_list = []
            yaw_list = []
            # crude_yaw = []
            rvec, tvec ,_ = aruco.estimatePoseSingleMarkers(corners, 0.09, self.camera_matrix, self.distortion_coeffs)
            for i in range(0, ids.size):
                aruco.drawAxis(cv_image, self.camera_matrix, self.distortion_coeffs, rvec[i], tvec[i], 0.1)
                R_ct    = np.matrix(cv2.Rodrigues(rvec[i])[0])
                R_tc    = R_ct.T           
                roll_marker, pitch_marker, yaw_marker = self.rotationMatrixToEulerAngles(self.R_flip*R_tc)
                yaw_list.append(yaw_marker)


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
                # dx1 = topRight[0] - topLeft[0]
                # dy1 = topRight[1] - topLeft[1] 
                # dx2 = bottomRight[0] - bottomLeft[0]
                # dy2 = bottomRight[1] - bottomLeft[1]
                # yaw_1 = math.atan2(-dy1, dx1)
                # yaw_2 = math.atan2(-dy2, dx2)
                id_list.append(markerID.item())
                x_list.append(cX)
                y_list.append(cY)
                # yaw_list.append((yaw_1 + yaw_2)/2.0)

            # if self.first:
            #     self.prev_id_list = id_list
            #     self.prev_yaw = yaw_list
            #     self.first = False
            # print("Pose : ",yaw_list,"\n","Crude: ",crude_yaw)
            # print(id_list, yaw_list)
            # print(self.prev_id_list, self.prev_yaw)
            # for i in range(0, ids.size):
            #     if self.prev_id_list.count(id_list[i]) > 0:
            #         j = self.prev_id_list.index(id_list[i])
            #         if abs(self.prev_yaw[j] - yaw_list[i]) > 0.25:
            #             print("Error: ",yaw_list[i], self.prev_yaw[j], id_list[i], self.prev_id_list[j])
            #             yaw_list[i] = self.prev_yaw[j]

            self.prev_yaw = yaw_list
            self.prev_id_list = id_list

            no_ids = len(id_list)
            self.pub_msg.id0 = -1
            self.pub_msg.id1 = -1
            self.pub_msg.id2 = -1
            self.pub_msg.id3 = -1
            if no_ids > 0:
                self.pub_msg.id0 = id_list[0]
                self.pub_msg.x0 = x_list[0]
                self.pub_msg.y0 = y_list[0]
                self.pub_msg.yaw0 = yaw_list[0]

            if no_ids > 1 :
                self.pub_msg.id1 = id_list[1]
                self.pub_msg.x1 = x_list[1]
                self.pub_msg.y1 = y_list[1]
                self.pub_msg.yaw1 = yaw_list[1]

            if no_ids > 2:
                self.pub_msg.id2 = id_list[2]
                self.pub_msg.x2 = x_list[2]
                self.pub_msg.y2 = y_list[2]
                self.pub_msg.yaw2 = yaw_list[2]

            if no_ids > 3:
                self.pub_msg.id3 = id_list[3]
                self.pub_msg.x3 = x_list[3]
                self.pub_msg.y3 = y_list[3]
                self.pub_msg.yaw3 = yaw_list[3]

        else:
            # code to show 'No Ids' when no markers are found
            cv2.putText(cv_image, "No Ids", (0,64), font, 1, (0,255,0),2,cv2.LINE_AA)
            print("No IDs detected")
            
        cv2.imshow('frame', cv2.resize(cv_image, (1280, 720)))
        cv2.waitKey(1)

    def isRotationMatrix(self, R):
        Rt = np.transpose(R)
        shouldBeIdentity = np.dot(Rt, R)
        I = np.identity(3, dtype=R.dtype)
        n = np.linalg.norm(I - shouldBeIdentity)
        return n < 1e-6

    def rotationMatrixToEulerAngles(self,R):
        assert (self.isRotationMatrix(R))

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
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    