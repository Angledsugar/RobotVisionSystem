import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from robotvisionsystem_msgs.msg import Motor
from robotvisionsystem_msgs.msg import State
from robotvisionsystem_msgs.msg import Ray

import numpy as np
import cv2
from cv_bridge import CvBridge

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
        # self.rvs()

    def rvs(self):
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

        self.pub_motor.publish(msg)
        self.get_logger().info("Steer : %s MotorSpeed : %s Break : %s" % (msg.steer, msg.motorspeed, msg.breakbool))
        self.i += 1
    
    def _state(self, data):
        print()
    
    def _ray(self, data):
        print()
    
    def _image(self, data):
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