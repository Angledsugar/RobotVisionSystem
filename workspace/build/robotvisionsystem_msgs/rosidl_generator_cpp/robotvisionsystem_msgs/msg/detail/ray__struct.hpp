// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotvisionsystem_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotvisionsystem_msgs__msg__Ray __attribute__((deprecated))
#else
# define DEPRECATED__robotvisionsystem_msgs__msg__Ray __declspec(deprecated)
#endif

namespace robotvisionsystem_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ray_
{
  using Type = Ray_<ContainerAllocator>;

  explicit Ray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->ray_array.begin(), this->ray_array.end(), 0.0f);
    }
  }

  explicit Ray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ray_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->ray_array.begin(), this->ray_array.end(), 0.0f);
    }
  }

  // field types and members
  using _ray_array_type =
    std::array<float, 12>;
  _ray_array_type ray_array;

  // setters for named parameter idiom
  Type & set__ray_array(
    const std::array<float, 12> & _arg)
  {
    this->ray_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotvisionsystem_msgs__msg__Ray
    std::shared_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotvisionsystem_msgs__msg__Ray
    std::shared_ptr<robotvisionsystem_msgs::msg::Ray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ray_ & other) const
  {
    if (this->ray_array != other.ray_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ray_

// alias to use template instance with default allocator
using Ray =
  robotvisionsystem_msgs::msg::Ray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotvisionsystem_msgs

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__RAY__STRUCT_HPP_
