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

        self.line_roi = [[0, 640], [240, 480]]

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

        right_line_mean, left_line_mean = self._line(self.image, self.line_roi[0], self.line_roi[1])
        self.i += 1

        self.viewer(right_line_mean, left_line_mean)

        # self._image()
    
    def _state(self, data):
        None
        # print(data)
    
    def _ray(self, data):
        None
        # print(data)
    
    def _line(self, image, width=[0,640], height=[240,480]):
        try:
            if len(image.shape) > 1:
                img_height, img_width, _ = image.shape
                if img_height > 0 and img_width > 0:
                    roi_image = image[height[0]:height[1], width[0]:width[1]]

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
                    for line in all_lines:
                        x1, y1, x2, y2 = line[0]
                        slope = 0
                        if (x2 - x1) == 0:
                            slope = 0
                        else:
                            slope = float(y2-y1) / float(x2-x1)

                        if 0.1 < slope < 10: # right_line
                            right_lines.append(line[0])

                        elif -10 < slope < -0.1: # left_line
                            left_lines.append(line[0])
                    
                    rlm = np.array(right_lines).mean(axis=0)
                    llm = np.array(left_lines).mean(axis=0)

                    print(f"{rlm}, {llm}")

                    return rlm, llm
            else:
                return [0,0,0,0], [0,0,0,0]

        except Exception as ex:
            print(f"\033[31m[Error] [_line]\033[0m Line : {ex.__traceback__.tb_lineno} | {ex}")

    def _trafficlight(self):
        print()
    
    def _stopline(self):
        print()
        
    def _image(self, data):
        # print(data)
        self.image = CvBridge().imgmsg_to_cv2(data, 'bgr8')
    
    def viewer(self, right_line_mean, left_line_mean):
        cv2.imshow('img', self.image)

        line_image = self.image.copy()
        cv2.rectangle(line_image, (int(self.line_roi[0][0]), int(self.line_roi[1][0])), (int(self.line_roi[0][1]), int(self.line_roi[1][1])), (0,255,0), 3)
        cv2.line(line_image, (int(right_line_mean[0]), int(self.line_roi[1][0])),
                             (int(right_line_mean[2]), int(self.line_roi[1][1])),
                             (255,0,0),
                             1)
        cv2.line(line_image, (int(left_line_mean[0]), int(self.line_roi[1][0])),
                             (int(left_line_mean[2]), int(self.line_roi[1][1])),
                             (255,0,0),
                             1)
        cv2.imshow('line', line_image)
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
