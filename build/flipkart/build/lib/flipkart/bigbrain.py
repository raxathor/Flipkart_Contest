import rclpy
import math
from rclpy.node import Node
from std_msgs.msg import Int32, String
from flipkart_msgs.msg import Pose

class BigBrain(Node):
    def __init__(self):
        super().__init__('BigBrain')
        self.mid_anchors = [[547,74], [441,76]]
        self.dest_anchors = [[953, 100], [953, 48], [61, 58], [59,95]]
        self.start_anchors = [[577, 525], [517, 520], [468, 521], [412, 524]]
        self.bot0_dest = [self.mid_anchors[0], "RIGHT", self.dest_anchors[0], "DROP", self.mid_anchors[0], "ZERO", self.start_anchors[0], "ZERO"]
        self.bot1_dest = [self.mid_anchors[0], "RIGHT", self.dest_anchors[1], "DROP", self.mid_anchors[0], "ZERO", self.start_anchors[1], "ZERO"]
        self.bot2_dest = [self.mid_anchors[1], "LEFT",  self.dest_anchors[2], "DROP", self.mid_anchors[1], "ZERO", self.start_anchors[2], "ZERO"]
        self.bot3_dest = [self.mid_anchors[1], "LEFT",  self.dest_anchors[3], "DROP", "RIGHT", self.mid_anchors[1], "BACK", self.start_anchors[3], "ZERO"]
        self.bot_dest = [self.bot0_dest, self.bot1_dest, self.bot2_dest, self.bot3_dest]
        self.bot_curr = [[0, 0, 0], [0, 0, 0], [0, 0, 0], [0, 0, 0]]
        self.start = False
        

        self.subscription = self.create_subscription(Pose, 'current_pose', self.pose_callback, 10)
        self.subscription1 = self.create_subscription(Int32,'Kptr', self.Kptr_callback, 10)
        self.subscription2 = self.create_subscription(Int32,'Kdtr', self.Kdtr_callback, 10)
        self.subscription3 = self.create_subscription(Int32,'KpYaw', self.KpYaw_callback, 10)
        self.subscription4 = self.create_subscription(Int32,'KdYaw', self.KdYaw_callback, 10)

        self.publisher0 = self.create_publisher(String, 'boombot0_cmd', 10)
        self.publisher1 = self.create_publisher(String, 'boombot1_cmd', 10)
        self.publisher2 = self.create_publisher(String, 'boombot2_cmd', 10)
        self.publisher3 = self.create_publisher(String, 'boombot3_cmd', 10)

        self.pub_msg = String()
        self.timer_period = 0.033
        self.timer = self.create_timer(self.timer_period, self.big_brain_time)
        self.j = 0
        self.i = 0
        self.count = 0
        self.drop_flag = False
        self.first = True

        self.prev_yaw_error = [0, 0, 0, 0]
        self.prev_mag = [0, 0, 0, 0]
        self.kp_tr = [0.75, 0.8, 1.2, 1.2]
        self.kd_tr = [0.10, 0.05, 0.06, 0.08]
        self.kp_yaw = [100, 110, 90, 90]
        self.kd_yaw = [10, 1, 10, 10]
        self.cap = [120, 90, 120, 120]
    def Kptr_callback(self,msg):
        self.kp_tr[self.j] = msg.data/1000

    def Kdtr_callback(self,msg):
        self.kd_tr[self.j] = msg.data/100
    
    def KpYaw_callback(self,msg):
        self.kp_yaw[self.j] = msg.data

    def KdYaw_callback(self,msg): 
        self.kd_yaw[self.j] = msg.data   
    def pose_callback(self, msg):
        if -1 < msg.id0 < 4:
            self.bot_curr[msg.id0] = [msg.x0, msg.y0, msg.yaw0]
        if -1 < msg.id1 < 4:
            self.bot_curr[msg.id1] = [msg.x1, msg.y1, msg.yaw1]
        if -1 < msg.id2 < 4:
            self.bot_curr[msg.id2] = [msg.x2, msg.y2, msg.yaw2]
        if -1 < msg.id3 < 4:
            self.bot_curr[msg.id3] = [msg.x3, msg.y3, msg.yaw3]

        if msg.id0 != -1 and msg.id1 != -1 and msg.id2 != -1 and msg.id3 != -1:
            self.start = True

    def big_brain_time(self):
        if self.j<4 and self.start:
            curr_pos = self.bot_curr[self.j]
            dest = self.bot_dest[self.j]

            if self.i<len(dest):
                if dest[self.i] == "DROP":
                    dy = dest[self.i - 1][1] - curr_pos[1] 
                    dx = curr_pos[0] - dest[self.i - 1][0]  
                    mag = math.sqrt(dx*dx + dy*dy)
                    self.drop_flag = True
                    if self.j < 2:
                        yaw_error = - math.pi/2 - curr_pos[2]
                    
                    else:
                        yaw_error = math.pi/2 - curr_pos[2]

                elif dest[self.i] == "RIGHT":
                    if self.j== 3:
                        dy = dest[self.i-2][1] - curr_pos[1] 
                        dx = curr_pos[0] - dest[self.i-2][0]  
                    else:
                        dy = dest[self.i-1][1] - curr_pos[1] 
                        dx = curr_pos[0] - dest[self.i-1][0] 
                    
                    mag = math.sqrt(dx*dx + dy*dy)
                    mag = min(mag, 8)
                    yaw_error =  - math.pi/2 - curr_pos[2] + math.pi/18

                elif dest[self.i] == "LEFT":
                    dy = dest[self.i-1][1] - curr_pos[1] 
                    dx = curr_pos[0] - dest[self.i-1][0]  
                    mag = math.sqrt(dx*dx + dy*dy)
                    mag = min(mag, 8)
                    yaw_error = math.pi/2 - curr_pos[2]

                elif dest[self.i] == "ZERO":
                    dy = dest[self.i-1][1] - curr_pos[1] 
                    dx = curr_pos[0] - dest[self.i-1][0]  
                    mag = math.sqrt(dx*dx + dy*dy)
                    mag = min(mag, 8)
                    yaw_error = -curr_pos[2]

                elif dest[self.i] == "BACK":
                    dy = dest[self.i-1][1] - curr_pos[1] 
                    dx = curr_pos[0] - dest[self.i-1][0]  
                    mag = math.sqrt(dx*dx + dy*dy)
                    mag = min(mag, 8)
                    yaw_error = - math.pi -curr_pos[2]

                else:
                    dy = curr_pos[1] - dest[self.i][1]
                    dx = dest[self.i][0] - curr_pos[0]
                    ang = math.atan2(dy, dx) 
                    mag = math.sqrt(dx*dx + dy*dy)
                    yaw_error = ang - (curr_pos[2] + math.pi/2)
                    print(curr_pos[1] ,dest[self.i][1], dest[self.i][0] , curr_pos[0])
                    if yaw_error > math.pi:
                        yaw_error = yaw_error - 2*math.pi
                    elif yaw_error < - math.pi:
                        yaw_error = yaw_error + 2*math.pi

                    print(ang, yaw_error)
                    if yaw_error > math.pi/2:
                        yaw_error = yaw_error - math.pi
                        mag = -mag

                    elif yaw_error < -math.pi/2:
                        yaw_error = yaw_error  + math.pi  
                        mag = -mag

                
                #print(self.j)
                com = self.kp_tr[self.j] * mag + self.kd_tr[self.j] * (mag - self.prev_mag[self.j])
                diff = self.kp_yaw[self.j] * yaw_error + self.kd_yaw[self.j] * (yaw_error - self.prev_yaw_error[self.j])

                max_com = self.cap[self.j]
                max_diff = 150 - self.cap[self.j]
                if com> max_com:
                    com = max_com
                elif com<-max_com:
                    com = -max_com
                
                if diff>max_diff:
                    diff = max_diff
                elif diff<-max_diff:
                    diff = -max_diff

                print(dx, dy, self.i) 
                print("mag: ", mag, " yaw error:",yaw_error, "Tr constants: ",self.kp_tr, self.kd_tr ," yaw constants: ",self.kp_yaw, self.kd_yaw," common:", com," differential:",diff)
                
                if abs(mag) <= 8 and abs(yaw_error) < math.pi/20:
                    print(self.drop_flag, self.first, self.count)
                    if self.drop_flag:
                        if self.first:
                            self.send_command(self.j, "SM,0,0")
                            self.first = False
                            self.count = 0
                        else:
                            self.count+=1
                            if self.count>5:
                                self.send_command(self.j, "DROPPARCEL")
                            else:
                                self.send_command(self.j, "SM,0,0")
                            if self.count > 12:
                                self.i+=1
                    else: 
                        self.i+=1
                    left_speed = 0
                    right_speed = 0

                else:
                    left_speed = com - diff
                    right_speed = com + diff

                self.send_command(self.j, "SM," +str(int(left_speed))+","+str(int(right_speed)))
                self.prev_yaw_error[self.j] = yaw_error
                self.prev_mag[self.j] = mag
                
                
            else:
                self.j+=1
                self.i=0
                self.drop_flag = False
                self.first = True
                self.prev_mag[self.j] = 0
                self.prev_yaw_error[self.j] = 0
            
        else:
            self.pub_msg.data = "SM,0,0"
            self.publisher0.publish(self.pub_msg)
            self.publisher1.publish(self.pub_msg)
            self.publisher2.publish(self.pub_msg)
            self.publisher3.publish(self.pub_msg)
    
    def send_command(self, idx, cmd):
        msg = String()
        msg.data = cmd

        if idx == 0:
            self.publisher0.publish(msg)
        elif idx == 1:
            self.publisher1.publish(msg)
        elif idx == 2:
            self.publisher2.publish(msg)
        elif idx == 3:
            self.publisher3.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    myBB = BigBrain()
    rclpy.spin(myBB)
    myBB.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
        
            

