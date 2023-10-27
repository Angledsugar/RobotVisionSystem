# Windows

**Table of Contents**
- [Windows](#windows)
- [WSL2 + Local](#wsl2--local)
  - [1. Install WSL2](#1-install-wsl2)
  - [2. Install ROS2 Foxy](#2-install-ros2-foxy)
  - [3. Robotvisionsystem Workspace](#3-robotvisionsystem-workspace)
  - [4. Run](#4-run)
- [Docker](#docker)

# WSL2 + Local
## 1. Install WSL2
## 2. Install [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)
## 3. Robotvisionsystem Workspace
```bash
# (WSL2)Terminal
$ mkdir -p ~/rvs_ws/src
$ cd ~/rvs_ws/src
$ git clone -b main https://github.com/Angledsugar/RobotVisionSystem.git
$ git clone -b main-ros2 https://github.com/Unity-Technologies/ROS-TCP-Endpoint.git
$ mv ./RobotVisionSystem/robotvisionsystem ./
$ mv ./RobotVisionSystem/robotvisionsystem_msgs ./
$ rm -rf RobotVisionSystem

$ cd ~/rvs_ws
$ colcon build --symlink-install
$ source install/setup.bash
```
## 4. Run
```bash
$ cd ~/(install path)/Windows
$ ./RVS.exe
```
```bash
# (WSL2)Terminal 1
$ ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=127.0.0.1 -p ROS_TCP_PORT:=10000
```

```bash
# (WSL2)Terminal 2
$ ros2 run robotvisionsystem rvs
```

# Docker

