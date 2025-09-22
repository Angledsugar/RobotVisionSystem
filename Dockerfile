FROM osrf/ros:humble-desktop

ARG UID=1000
ARG GID=1000

# Install required Python packages and GUI libraries
RUN apt-get update && \
    apt-get install -y \
    python3-numpy \
    python3-opencv \
    python3-cv-bridge \
    python3-pip \
    libgl1-mesa-glx \
    libglib2.0-0 \
    libsm6 \
    libxext6 \
    libxrender-dev \
    libgomp1 \
    libgthread-2.0-0 \
    libgtk-3-0 && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

RUN groupadd -g ${GID} rvs && \
    useradd -m -u ${UID} -g ${GID} rvs

# Add ROS2 environment setup to bashrc
RUN echo "source /opt/ros/humble/setup.bash" >> /home/rvs/.bashrc && \
    echo "source /rvs_ws/install/setup.bash" >> /home/rvs/.bashrc

USER rvs
WORKDIR /rvs/workspace
