# Robot Vision System (RVS) with ROS2

## Quick Start

### 1. Clone the repository
```bash
git clone https://github.com/chanyeokchoi/rvs.git
cd rvs
```

### 2. Run with Docker Compose
```bash
# X11 forwarding 설정 (Linux)
xhost +local:docker

# 컨테이너 실행
docker compose up -d

# 컨테이너 접속
docker exec -it rvs_ws bash
```

### 3. Run ROS2 nodes
```bash
# Terminal 1 - ROS TCP Endpoint
ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=127.0.0.1 -p ROS_TCP_PORT:=10000

# Terminal 2 - Robot Vision System
ros2 run robotvisionsystem rvs
```

## Docker Image
- **GitHub Container Registry**: `ghcr.io/chanyeokchoi/rvs-ros2:latest`
- **Base Image**: `osrf/ros:humble-desktop`
- **Included Packages**: numpy, opencv, cv-bridge, GUI libraries
