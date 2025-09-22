// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotvisionsystem_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__TRAITS_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotvisionsystem_msgs/msg/detail/ray__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotvisionsystem_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ray & msg,
  std::ostream & out)
{
  out << "{";
  // member: ray_array
  {
    if (msg.ray_array.size() == 0) {
      out << "ray_array: []";
    } else {
      out << "ray_array: [";
      size_t pending_items = msg.ray_array.size();
      for (auto item : msg.ray_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ray_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ray_array.size() == 0) {
      out << "ray_array: []\n";
    } else {
      out << "ray_array:\n";
      for (auto item : msg.ray_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ray & msg, bool use_flow_style = false)
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
  const robotvisionsystem_msgs::msg::Ray & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotvisionsystem_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotvisionsystem_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotvisionsystem_msgs::msg::Ray & msg)
{
  return robotvisionsystem_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotvisionsystem_msgs::msg::Ray>()
{
  return "robotvisionsystem_msgs::msg::Ray";
}

template<>
inline const char * name<robotvisionsystem_msgs::msg::Ray>()
{
  return "robotvisionsystem_msgs/msg/Ray";
}

template<>
struct has_fixed_size<robotvisionsystem_msgs::msg::Ray>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotvisionsystem_msgs::msg::Ray>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotvisionsystem_msgs::msg::Ray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__TRAITS_HPP_
