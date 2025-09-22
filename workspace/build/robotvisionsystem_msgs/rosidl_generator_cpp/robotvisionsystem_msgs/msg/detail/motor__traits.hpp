// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotvisionsystem_msgs/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotvisionsystem_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motor & msg,
  std::ostream & out)
{
  out << "{";
  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << ", ";
  }

  // member: motorspeed
  {
    out << "motorspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.motorspeed, out);
    out << ", ";
  }

  // member: breakbool
  {
    out << "breakbool: ";
    rosidl_generator_traits::value_to_yaml(msg.breakbool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }

  // member: motorspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.motorspeed, out);
    out << "\n";
  }

  // member: breakbool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "breakbool: ";
    rosidl_generator_traits::value_to_yaml(msg.breakbool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotvisionsystem_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotvisionsystem_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotvisionsystem_msgs::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotvisionsystem_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotvisionsystem_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotvisionsystem_msgs::msg::Motor & msg)
{
  return robotvisionsystem_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotvisionsystem_msgs::msg::Motor>()
{
  return "robotvisionsystem_msgs::msg::Motor";
}

template<>
inline const char * name<robotvisionsystem_msgs::msg::Motor>()
{
  return "robotvisionsystem_msgs/msg/Motor";
}

template<>
struct has_fixed_size<robotvisionsystem_msgs::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotvisionsystem_msgs::msg::Motor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotvisionsystem_msgs::msg::Motor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__TRAITS_HPP_
