// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotvisionsystem_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotvisionsystem_msgs/msg/detail/ray__rosidl_typesupport_introspection_c.h"
#include "robotvisionsystem_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotvisionsystem_msgs/msg/detail/ray__functions.h"
#include "robotvisionsystem_msgs/msg/detail/ray__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotvisionsystem_msgs__msg__Ray__init(message_memory);
}

void robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_fini_function(void * message_memory)
{
  robotvisionsystem_msgs__msg__Ray__fini(message_memory);
}

size_t robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__size_function__Ray__ray_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_const_function__Ray__ray_array(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_function__Ray__ray_array(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__fetch_function__Ray__ray_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_const_function__Ray__ray_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__assign_function__Ray__ray_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_function__Ray__ray_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_member_array[1] = {
  {
    "ray_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robotvisionsystem_msgs__msg__Ray, ray_array),  // bytes offset in struct
    NULL,  // default value
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__size_function__Ray__ray_array,  // size() function pointer
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_const_function__Ray__ray_array,  // get_const(index) function pointer
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__get_function__Ray__ray_array,  // get(index) function pointer
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__fetch_function__Ray__ray_array,  // fetch(index, &value) function pointer
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__assign_function__Ray__ray_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_members = {
  "robotvisionsystem_msgs__msg",  // message namespace
  "Ray",  // message name
  1,  // number of fields
  sizeof(robotvisionsystem_msgs__msg__Ray),
  robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_member_array,  // message members
  robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_init_function,  // function to initialize message memory (memory has to be allocated)
  robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_type_support_handle = {
  0,
  &robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotvisionsystem_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotvisionsystem_msgs, msg, Ray)() {
  if (!robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_type_support_handle.typesupport_identifier) {
    robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotvisionsystem_msgs__msg__Ray__rosidl_typesupport_introspection_c__Ray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
