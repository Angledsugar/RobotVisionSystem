// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotvisionsystem_msgs__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__robotvisionsystem_msgs__msg__Motor __declspec(deprecated)
#endif

namespace robotvisionsystem_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0f;
      this->motorspeed = 0.0f;
      this->breakbool = false;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0f;
      this->motorspeed = 0.0f;
      this->breakbool = false;
    }
  }

  // field types and members
  using _steer_type =
    float;
  _steer_type steer;
  using _motorspeed_type =
    float;
  _motorspeed_type motorspeed;
  using _breakbool_type =
    bool;
  _breakbool_type breakbool;

  // setters for named parameter idiom
  Type & set__steer(
    const float & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__motorspeed(
    const float & _arg)
  {
    this->motorspeed = _arg;
    return *this;
  }
  Type & set__breakbool(
    const bool & _arg)
  {
    this->breakbool = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotvisionsystem_msgs__msg__Motor
    std::shared_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotvisionsystem_msgs__msg__Motor
    std::shared_ptr<robotvisionsystem_msgs::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->steer != other.steer) {
      return false;
    }
    if (this->motorspeed != other.motorspeed) {
      return false;
    }
    if (this->breakbool != other.breakbool) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  robotvisionsystem_msgs::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotvisionsystem_msgs

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_HPP_
