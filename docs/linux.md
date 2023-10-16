# Linux

**Table of Contents**
- [Linux](#linux)
- [Local](#local)
  - [1. Install ROS2 Foxy](#1-install-ros2-foxy)
  - [2. Robotvisionsystem Workspace](#2-robotvisionsystem-workspace)
  - [3. Run](#3-run)
- [Docker](#docker)

# Local
## 1. Install [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)
## 2. Robotvisionsystem Workspace
```bash
$ mkdir -p ~/rvs_ws/src
$ cd ~/rvs_ws/src
$ git clone -b main --recursive https://github.com/Angledsugar/RobotVisionSystem.git

$ cd ~/rvs_ws
$ colcon build
$ source install/setup.bash
```
## 3. Run
```bash
# Terminal 0
$ cd ~/(install path)/Linux
$ ./RVS.x86_64
```
```bash
# Terminal 1
$ ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=127.0.0.1 -p ROS_TCP_PORT:=10000
```

```bash
# Terminal 2
$ ros2 run robotvisionsystem rvs
```

# Docker
