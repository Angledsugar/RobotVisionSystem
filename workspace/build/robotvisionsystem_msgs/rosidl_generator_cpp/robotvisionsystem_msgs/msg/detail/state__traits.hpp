// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotvisionsystem_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotvisionsystem_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotvisionsystem_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: pos_z
  {
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << ", ";
  }

  // member: rot_x
  {
    out << "rot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_x, out);
    out << ", ";
  }

  // member: rot_y
  {
    out << "rot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_y, out);
    out << ", ";
  }

  // member: rot_z
  {
    out << "rot_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_z, out);
    out << ", ";
  }

  // member: rot_w
  {
    out << "rot_w: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_w, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << "\n";
  }

  // member: rot_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_x, out);
    out << "\n";
  }

  // member: rot_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_y, out);
    out << "\n";
  }

  // member: rot_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_z, out);
    out << "\n";
  }

  // member: rot_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_w: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const robotvisionsystem_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotvisionsystem_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotvisionsystem_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotvisionsystem_msgs::msg::State & msg)
{
  return robotvisionsystem_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotvisionsystem_msgs::msg::State>()
{
  return "robotvisionsystem_msgs::msg::State";
}

template<>
inline const char * name<robotvisionsystem_msgs::msg::State>()
{
  return "robotvisionsystem_msgs/msg/State";
}

template<>
struct has_fixed_size<robotvisionsystem_msgs::msg::State>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotvisionsystem_msgs::msg::State>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotvisionsystem_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
