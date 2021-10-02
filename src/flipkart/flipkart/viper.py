import rclpy
import math
from rclpy.node import Node
from std_msgs.msg import Int32, String
from flipkart_msgs.msg import Pose

class Viper(Node):
    def __init__(self):
        super().__init__('Viper')
        self.subscription0 = self.create_subscription(Pose,'current_pose', self.ViperORB_callback, 10)
        self.subscription1 = self.create_subscription(Int32,'Kptr', self.Kptr_callback, 10)
        self.subscription2 = self.create_subscription(Int32,'Kdtr', self.Kdtr_callback, 10)
        self.subscription3 = self.create_subscription(Int32,'KpYaw', self.KpYaw_callback, 10)
        self.subscription4 = self.create_subscription(Int32,'KdYaw', self.KdYaw_callback, 10)
        self.subscription0
        self.subscription1
        self.subscription2
        self.subscription3
        self.subscription4
        self.dest_x = [549, 549, 59, 59, 59, 59] 
        self.dest_y = [86, 86, 122, 122, 122, 122]
        self.i = 0

        self.publisher = self.create_publisher(String,'boombot0_cmd', 10)
        self.timer_period = 0.033
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.pub_msg = String()

        self.prev_yaw_error = 0
        self.prev_mag = 0
        self.kp_tr = 0.5
        self.kd_tr = 0.06
        self.kp_yaw = 80
        self.kd_yaw = 8

    def timer_callback(self):
        self.publisher.publish(self.pub_msg)

    def ViperORB_callback(self,msg):
        self.curr_x = [msg.x0,msg.x1,msg.x2,msg.x3]
        self.curr_y = [msg.y0,msg.y1,msg.y2,msg.y3]
        self.curr_yaw = [msg.yaw0,msg.yaw1,msg.yaw2,msg.yaw3]
        self.ids = [msg.id0,msg.id1,msg.id2,msg.id3]     


        if(self.i < 5):
            for i in range(0,4):
                if(self.ids[i]==7):
                    dy = self.dest_y[self.i] - self.curr_y[i]
                    dx = self.curr_x[i] - self.dest_x[self.i]  
                    mag = math.sqrt(dx*dx + dy*dy)
                    ang = math.atan2(dy, dx) + math.pi/2

                    if self.i == 1 or self.i==3:
                        ang = math.pi/2

                    yaw_error =  ang - self.curr_yaw[i]

                    if yaw_error > math.pi/2 :
                        yaw_error = math.pi - yaw_error
                        mag = -mag

                    elif yaw_error < -math.pi/2:
                        yaw_error = math.pi + yaw_error
                        mag = -mag

                    com = self.kp_tr * mag + self.kd_tr * (mag - self.prev_mag)
                    diff = self.kp_yaw * yaw_error + self.kd_yaw * (yaw_error - self.prev_yaw_error)

                    if(com>120):
                        com = 120
                    elif(com<-120):
                        com = -120
                    
                    if(diff>30):
                        diff = 30
                    elif(diff<-30):
                        diff = -30

                    print("mag: ", mag, "angle :", math.degrees(ang))
                    print("dx: ", dx,"dy: ",dy ," yaw error:",yaw_error, "Tr constants: ",self.kp_tr, self.kd_tr ," yaw constants: ",self.kp_yaw, self.kd_yaw," common:", com," differential:",diff)

                    if abs(mag) <= 10 and abs(yaw_error) < math.pi/10:
                        self.i+=1
                        left_speed = 0
                        right_speed = 0

                    else:
                        left_speed = com - diff
                        right_speed = com + diff

                    self.prev_yaw_error = yaw_error
                    self.prev_mag = mag

                    if self.i >= 5: 
                        self.pub_msg.data = "DROPPARCEL"
                    
                    else:
                        self.pub_msg.data = "SM," +str(int(left_speed))+","+str(int(right_speed))
                    
                    print(self.pub_msg, "number: ", self.i)
                     

    def Kptr_callback(self,msg):
        self.kp_tr = msg.data/1000

    def Kdtr_callback(self,msg):
        self.kd_tr = msg.data/100
    
    def KpYaw_callback(self,msg):
        self.kp_yaw = msg.data

    def KdYaw_callback(self,msg): 
        self.kd_yaw = msg.data   
    
      
def main(args=None):
    rclpy.init(args=args)
    viper = Viper()
    rclpy.spin(viper)
    viper.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()