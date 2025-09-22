// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotvisionsystem_msgs/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotvisionsystem_msgs
{

namespace msg
{

namespace builder
{

class Init_Motor_breakbool
{
public:
  explicit Init_Motor_breakbool(::robotvisionsystem_msgs::msg::Motor & msg)
  : msg_(msg)
  {}
  ::robotvisionsystem_msgs::msg::Motor breakbool(::robotvisionsystem_msgs::msg::Motor::_breakbool_type arg)
  {
    msg_.breakbool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::Motor msg_;
};

class Init_Motor_motorspeed
{
public:
  explicit Init_Motor_motorspeed(::robotvisionsystem_msgs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_breakbool motorspeed(::robotvisionsystem_msgs::msg::Motor::_motorspeed_type arg)
  {
    msg_.motorspeed = std::move(arg);
    return Init_Motor_breakbool(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::Motor msg_;
};

class Init_Motor_steer
{
public:
  Init_Motor_steer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_motorspeed steer(::robotvisionsystem_msgs::msg::Motor::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_Motor_motorspeed(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotvisionsystem_msgs::msg::Motor>()
{
  return robotvisionsystem_msgs::msg::builder::Init_Motor_steer();
}

}  // namespace robotvisionsystem_msgs

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__BUILDER_HPP_
