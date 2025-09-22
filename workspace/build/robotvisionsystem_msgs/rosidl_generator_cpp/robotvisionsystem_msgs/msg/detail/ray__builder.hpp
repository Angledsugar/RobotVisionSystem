// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotvisionsystem_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotvisionsystem_msgs/msg/detail/ray__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotvisionsystem_msgs
{

namespace msg
{

namespace builder
{

class Init_Ray_ray_array
{
public:
  Init_Ray_ray_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotvisionsystem_msgs::msg::Ray ray_array(::robotvisionsystem_msgs::msg::Ray::_ray_array_type arg)
  {
    msg_.ray_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotvisionsystem_msgs::msg::Ray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotvisionsystem_msgs::msg::Ray>()
{
  return robotvisionsystem_msgs::msg::builder::Init_Ray_ray_array();
}

}  // namespace robotvisionsystem_msgs

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_
