# Xycar 및 개인 PC 네트워크 구성변경

## 현재 문제점

### Xycar가 라우터가 되는 구조

- VNC로 접속하기 위함이지만 느리고 불안정함
- 외부 인터넷을 사용할 수 없음
- 다른 컴퓨터와 ROS Master / Host 구성을 할 수 없음

## 변경 목표

- VNC를 사용하지 않고 Xycar 내부 코드 수정하기 
- 다른 컴퓨터와 ROS 네트워크 연결 가능하게 하기
    - Xycar를 Master, 개인 PC를 host로 설정하여 개인 PC에서 토픽 확인 및 gui 툴 사용
- 코드 작성 환경 변경
    - 메인 코드를 Xycar가 아닌 개인 PC에서 실행하고 수정할 수 있게 함

## 변경 내용

### 사전 설정
1. 연구실 네트워크 연결
    - Wi-fi name : RAISE_project
    - Password : engineers
2. 개인 PC 터미널 이용해 Xycar에 ssh 연결
    - ssh raise@"각 Xycar에 부여된 IP"
    - ssh pw : raise
3. Xycar 터미널에서 .bashrc 수정
    - 만약 Windows(WSL2)에서 ROS를 실행시키는 환경인 경우 [[WSL2 설정 변경하기]](WSL2_ipbridge_setting.md)
    - vim ~/.bashrc
        - ROS_HOSTNAME="개인 PC ip주소" 로 변경
    - source ~/.bashrc

### ssh 이용하여 Xycar 내부 코드 수정하기
접근 방법  
- ssh
- VS Code remote-ssh

### 개인 PC에서 코드 수정하기
알아서 잘..

