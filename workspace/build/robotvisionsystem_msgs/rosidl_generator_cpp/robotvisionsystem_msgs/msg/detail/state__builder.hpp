// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotvisionsystem_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotvisionsystem_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotvisionsystem_msgs
{

namespace msg
{

namespace builder
{

class Init_State_rot_w
{
public:
  explicit Init_State_rot_w(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::robotvisionsystem_msgs::msg::State rot_w(::robotvisionsystem_msgs::msg::State::_rot_w_type arg)
  {
    msg_.rot_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_rot_z
{
public:
  explicit Init_State_rot_z(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_rot_w rot_z(::robotvisionsystem_msgs::msg::State::_rot_z_type arg)
  {
    msg_.rot_z = std::move(arg);
    return Init_State_rot_w(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_rot_y
{
public:
  explicit Init_State_rot_y(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_rot_z rot_y(::robotvisionsystem_msgs::msg::State::_rot_y_type arg)
  {
    msg_.rot_y = std::move(arg);
    return Init_State_rot_z(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_rot_x
{
public:
  explicit Init_State_rot_x(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_rot_y rot_x(::robotvisionsystem_msgs::msg::State::_rot_x_type arg)
  {
    msg_.rot_x = std::move(arg);
    return Init_State_rot_y(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_pos_z
{
public:
  explicit Init_State_pos_z(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_rot_x pos_z(::robotvisionsystem_msgs::msg::State::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_State_rot_x(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_pos_y
{
public:
  explicit Init_State_pos_y(::robotvisionsystem_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_pos_z pos_y(::robotvisionsystem_msgs::msg::State::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_State_pos_z(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

class Init_State_pos_x
{
public:
  Init_State_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_pos_y pos_x(::robotvisionsystem_msgs::msg::State::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_State_pos_y(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotvisionsystem_msgs::msg::State>()
{
  return robotvisionsystem_msgs::msg::builder::Init_State_pos_x();
}

}  // namespace robotvisionsystem_msgs

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
