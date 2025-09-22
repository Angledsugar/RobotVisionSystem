// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotvisionsystem_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__STRUCT_H_
#define ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/State in the package robotvisionsystem_msgs.
typedef struct robotvisionsystem_msgs__msg__State
{
  float pos_x;
  float pos_y;
  float pos_z;
  float rot_x;
  float rot_y;
  float rot_z;
  float rot_w;
} robotvisionsystem_msgs__msg__State;

// Struct for a sequence of robotvisionsystem_msgs__msg__State.
typedef struct robotvisionsystem_msgs__msg__State__Sequence
{
  robotvisionsystem_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotvisionsystem_msgs__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTVISIONSYSTEM_MSGS__MSG__DETAIL__STATE__STRUCT_H_
