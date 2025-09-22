// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_H_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motor in the package robotvisionsystem_msgs.
typedef struct robotvisionsystem_msgs__msg__Motor
{
  float steer;
  float motorspeed;
  bool breakbool;
} robotvisionsystem_msgs__msg__Motor;

// Struct for a sequence of robotvisionsystem_msgs__msg__Motor.
typedef struct robotvisionsystem_msgs__msg__Motor__Sequence
{
  robotvisionsystem_msgs__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotvisionsystem_msgs__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__MOTOR__STRUCT_H_
