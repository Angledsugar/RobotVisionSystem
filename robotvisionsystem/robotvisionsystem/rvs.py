import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from robotvisionsystem_msgs.msg import Motor
from robotvisionsystem_msgs.msg import State
from robotvisionsystem_msgs.msg import Ray

import numpy as np
import cv2
from cv_bridge import CvBridge

import math

class RobotVisionSystem(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.pub_motor = self.create_publisher(Motor, '/car/motor', 10)

        self.sub_state = self.create_subscription(State, '/car/state', self._state, 10)
        self.sub_ray = self.create_subscription(Ray, '/car/sensor/ray', self._ray, 10)
        self.sub_front_image = self.create_subscription(Image, '/car/sensor/camera/front', self._image, 10)
        
        self.i = 0
        self.image = np.empty(shape=[1])

        self.timer = self.create_timer(0.01, self.rvs)

    def rvs(self):
        self.sub_front_image
        self.sub_ray
        self.sub_state

        msg = Motor()
        if 0 < self.i <= 1:    
            msg.steer = 0.0
            msg.motorspeed = 1.0
        
        elif 1 < self.i <= 5:    
            msg.steer = 30.0
            msg.motorspeed = 1.0

        elif 5 < self.i <= 10:
            msg.steer = -30.0
            msg.motorspeed = 5.0

        # self.pub_motor.publish(msg)
        # self.get_logger().info("Steer : %s MotorSpeed : %s Break : %s" % (msg.steer, msg.motorspeed, msg.breakbool))
        self.i += 1

        # self._image()
    
    def _state(self, data):
        None
        # print(data)
    
    def _ray(self, data):
        None
        # print(data)
    
    def _line(self):
        roi_image = self.image[240:480, 0:640]

        # Gray scale
        gray = cv2.cvtColor(roi_image, cv2.COLOR_BGR2GRAY)

        # GaussianBlur
        blur_gray = cv2.GaussianBlur(gray,(5, 5), 0)

        # ROI Area
        edge_img = cv2.Canny(np.uint8(blur_gray), 60, 70)

        # HoughLinesP
        all_lines = cv2.HoughLinesP(edge_img, 1, math.pi/180,30,30,10)

        # draw lines in ROI area
        # calculate slope and do filtering
        right_lines = []
        left_lines = []
        line_img = self.image.copy()
        for line in all_lines:
            x1, y1, x2, y2 = line[0]
            slope = 0
            if (x2 - x1) == 0:
                slope = 0
            else:
                slope = float(y2-y1) / float(x2-x1)

            if 0.1 < slope < 10: # righ_line
                right_lines.append(slope)

            elif -10 < slope < -0.1: # left_line
                left_lines.append(slope)
        
        self.l_x1, self.l_x2, self.r_x1, self.r_x2 = self.__mean_line(left_lines, right_lines)

        cv2.line(self.image, (self.l_x1, 0+240), (self.l_x2, 240+240), (255, 0, 0), 2)
        cv2.line(self.image, (self.r_x1, 0+240), (self.r_x2, 240+240), (255, 0, 0), 2)
    
    def _trafficlight(self):
        print()
    
    def _stopline(self):
        print()
    
    def __mean_line(self, left_lines, right_lines):
        l_x1 = 0
        l_x2 = 0
        r_x1 = 0
        r_x2 = 0
        for i, lines in enumerate([left_lines, right_lines]):
            x_sum, y_sum, m_sum = 0.0, 0.0, 0.0
            size = len(lines)
            for line in lines:
                x1, y1, x2, y2 = line[0]
                x_sum += x1 + x2
                y_sum += y1 + y2
                m_sum += float(y2 - y1) / float(x2 - x1)
                x_avg = x_sum / (size * 2)
                y_avg = y_sum / (size * 2)
                m = m_sum / size
                b = y_avg - m * x_avg
            
            if i == 0:
                l_x1 = int((0.0 - b) / m)
                l_x2 = int((240.0 - b) / m)
            
            else:
                r_x1 = int((0.0 - b) / m)
                r_x2 = int((240.0 - b) / m)

        return l_x1, l_x2, r_x1, r_x2

    
    def _image(self, data):
        print(data)
        self.image = CvBridge().imgmsg_to_cv2(data, 'bgr8')
        cv2.imshow('img', self.image)
        cv2.waitKey(33)
    
def main(args=None):
    rclpy.init(args=args)

    rvs = RobotVisionSystem()

    rclpy.spin(rvs)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    rvs.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
