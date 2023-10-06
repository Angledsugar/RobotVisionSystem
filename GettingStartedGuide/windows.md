# Widows + WSL2(Ubuntu 18.04)
![windows_setting](../image/windows_setting.png)
## Windows Subsystem For Linux 2 (WSL2) 설치 [[Link]](https://learn.microsoft.com/ko-kr/windows/wsl/install)  
 
1. Install Xming X Server for Windows [[Link]](https://sourceforge.net/projects/xming/)  
*Warning* : Xming 설치 시 개인, 공용 네트워크 설정 모두 체크

2. Open "Windows Power shell"  
```bash  
# Windows
PS> wsl --install  
PS> wsl --install -d Ubuntu-18.04  
PS> wsl
```
```bash
# WSL2
$ echo 'export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '"'"'{print $2}'"'"'):0' >> ~/.bashrc
$ . ~/.bashrc
```

## ROS melodic 설치 [[Link]](http://wiki.ros.org/melodic/Installation/Ubuntu)
 
```bash
# WSL2
$ sudo apt-get update && sudo apt-get upgrade -y
$ sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'  
$ sudo apt install curl  
$ curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -  
$ sudo apt update  
$ sudo apt install ros-melodic-desktop  
$ echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc  
$ source ~/.bashrc  
$ sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential  
$ sudo apt install python-rosdep  
$ sudo rosdep init  
$ rosdep update  
$ mkdir -p ~/catkin_ws/src  
$ cd ~/xycar_ws/  
$ catkin_make  
$ echo "source ~/xycar_ws/devel/setup.bash" >> ~/.bashrc  
$ echo "export ROS_MASTER_URI=http://localhost:11311 " >> ~/.bashrc  
$ echo "export ROS_HOSTNAME=localhost " >> ~/.bashrc  
$ source ~/.bashrc  
```

## 주행 시뮬레이터 패키지 설치
 
1. Install Angledsugar/RobotVision_xycar in **WSL2**
```bash
# WSL2
$ cd ~/xycar_ws/src  
$ sudo apt update && sudo apt upgrade -y  
$ sudo apt install ros-melodic-rosbridge-server  
$ git clone https://github.com/Angledsugar/RobotVision_xycar.git  
$ cd ~/xycar_ws && catkin_make
```
2. Install Angledsugar/RobotVision_xycar in **Windows**  
(1) Go to [Angledsugar/RobotVision_xycar](https://github.com/Angledsugar/RobotVision_xycar)  
(2) Code > Download zip  

## 실행 방법
 
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



