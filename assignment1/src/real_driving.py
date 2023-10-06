#!/usr/bin/env python
# -*- coding: utf-8 -*-

import numpy as np
import cv2, math
import rospy, rospkg, time
from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage
from geometry_msgs.msg import PoseStamped

from cv_bridge import CvBridge
from xycar_msgs.msg import xycar_motor
from math import *
import signal
import sys
import os
import random

import time


def signal_handler(sig, frame):
    import time
    time.sleep(3)
    os.system('killall -9 python rosout')
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)

class Robotvisionsystem:
    def __init__(self):
        self.image = np.empty(shape=[0])
        self.bridge = CvBridge() 
        self.motor = None 
        self.angle = 0
        self.speed = 0.1
        self.stop = 0

        self.CAM_FPS = 30
        self.WIDTH, self.HEIGHT = 640, 480

        rospy.init_node('driving')
        
        self.motor = rospy.Publisher('/xycar_motor', xycar_motor, queue_size=1)
        self.real_image = rospy.Subscriber('/usb_cam/image_raw/compressed', CompressedImage, self.real_img_callback)
        
        print("===================================================")
        print("=          Real world Xycar self driving          =")
        print("===================================================")
        
        self.start()

    def drive(self, angle, speed):
        
        motor_msg = xycar_motor()
        motor_msg.angle = angle
        motor_msg.speed = speed

        self.motor.publish(motor_msg)
    
    def real_img_callback(self, data):
        # print data
        try:
            self.realimage = self.bridge.compressed_imgmsg_to_cv2(data, "bgr8") # mono8, mono16, bgr8, rgb8, bgra8, rgba8, passthrough
        except CvBridgeError as e:
            print("___Error___")
            print(e)
    
    def trackbar(self):
        img = self.image
        hls = cv2.cvtColor(img, cv2.COLOR_BGR2HLS)
        cv2.namedWindow("TrackBar Windows")
        cv2.setTrackbarPos("L-High","TrackBar Windows", 255)
        cv2.setTrackbarPos("L-Low" ,"TrackBar Windows", 0)
        print ":::::"
        while cv2.waitKey(1) != ord('q'):
            L_h = cv2.getTrackbarPos("L-High", "TrackBar Windows")
            L_l = cv2.getTrackbarPos("L-Low" , "TrackBar Windows")
            HLS = cv2.inRange(hls, (0, L_l, 0), (255, L_h, 255))
            hls_out = cv2.bitwise_and(hls, hls, mask = HLS)
            result = cv2.cvtColor(hls_out, cv2.COLOR_HSV2BGR)
            cv2.imshow("TrackBar Windows", result)
        
        cv2.destoryAllWindows()

    def start(self):
        while not self.image.size == (self.WIDTH * self.HEIGHT * 3):
            # print("==> Complete Load Image ")
            continue

        while not rospy.is_shutdown(): # Main Loop
            
            # HLS Ckeck
            # self.trackbar()
            
            # Task1 : White, Yellow line detection
            # Task2 : Traffic light -> Stop or Turn Left
            # Task3 : 90 degree line
            # Task4 : Finish line

            # Change Code
            self.current_time = rospy.get_time()
            img = self.image.copy()

            # Pub angle, speed
            self.drive(self.angle, self.speed)


            # Check Image
            original_img = self.image.copy()
            cv2.putText(original_img, 'Time : ', (10, 20), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)
            cv2.putText(original_img, str(self.current_time), (80, 20), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)
            cv2.putText(original_img, 'Speed : ', (10, 40), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)
            cv2.putText(original_img, str(self.speed), (80, 40), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)
            cv2.putText(original_img, 'Angled : ', (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)
            cv2.putText(original_img, str(self.angle), (80, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (125, 125, 125), 1, cv2.LINE_AA)

            robotvision_horizontal = np.hstack((img, original_img))
            cv2.imshow("RobotVision", robotvision_horizontal)
            cv2.waitKey(1)            
            
if __name__ == '__main__':
    RVS = Robotvisionsystem()
