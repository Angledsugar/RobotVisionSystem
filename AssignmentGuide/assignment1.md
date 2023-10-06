# Assignment1 : OpenCV로 차선, 신호등 인식하기

<!-- <p><img src="./GettingStartedGuide/1.png" align="left">
<img src="./GettingStartedGuide/2.png" align="right"> </p>   -->
![0](../image/1.png)
![1](../image/2.png)

If you control the robot right away in the real world, there are many problems. The cost of researching robots is high, but we don't know what problems will arise because the code we wrote doesn't work perfectly at once. To solve this problem, we create a Simulation environment and test the code.

## **Deadline : 22.11.08 ~ 22.12.06**

## Windows (WSL2) 실행 방법
 
1. Check Host IP (eth0: intet 000.000.000.000)
```bash
# WSL2
$ ifconfig  
# Windows
PS > wsl hostname -I
```
2. Run Robotvision_Xycar     
```bash
# (1) WSL2 Terminal 1 
$ roslaunch rosbridge_server rosbridge_websocket.launch
```  
```bash  
# (2) Use Windows Terminal or Click .exe
# Unity is on, Input Host IP(WSL2 IP). => "ws://{000.000.000.000}:9090" and Press "Enter".
PS > (your directory)/RobotVision_xycar/Build/Windows/Start/RVS_start.exe

# If you input right host ip, ros can connect RVS. 
PS > (your directory)/RobotVision_xycar/Build/Windows/Xycar/RVS.exe

```
```bash
# (3) WSL2 Terminal 2 
$ roslaunch assignment1 driving.launch   
```

## Ubuntu 실행 방법  
```bash
# (1) Terminal 1 
$ roslaunch rosbridge_server rosbridge_websocket.launch
```  
```bash  
# (2) Terminal 2
# Unity is on, Input Ubuntu IP(localhost). => "ws://localhost:9090" and Press "Enter".
$ ~/xycar_ws/src/RobotVision_xycar/Build/Linux/Start/RVS_start.86_64

# If you input right host ip, ros can connect RVS. 
$ ~/xycar_ws/src/RobotVision_xycar/Build/Linux/Xycar/RVS.86_64

```
```bash
# (3) Terminal 3
$ roslaunch assignment1 driving.launch   
```

## RVS simulation guide   
'F1' : Car vision (ros)  
'F2' : Top view  
'F3' : Car back vision  

## OpenCV
  
[1] Image Read  
```bash
Image : OpenCV-ImageRead.png  
Line >> img = cv2.line(img, (0,0), (511, 511), (255, 0, 0), 5)  
Rectangle >> img = cv2.rectangle(img, (100,100), (300,500), (0,255,0), 3)  
Circle >> img  = cv2.circle(img, (300,400), 100, (0,0,255), 2)  
Text >> cv2.putText(img, 'Test', (10,50), cv2.FONT_HERSHEY_SIMPLEX, 4, (255,255))  
Image file read >> img = cv2.imread('picture.jpg', cv2.IMREAD_GRAYSCALE)   
Image show >> cv2.imshow('Color', img)   
Image save >> cv2.imwrite('new_image.jpg', img)
```   
[2] Gray Scale  
[3] Gaussian Blur  
[4] HSV -Binary  
[5] ROI  
