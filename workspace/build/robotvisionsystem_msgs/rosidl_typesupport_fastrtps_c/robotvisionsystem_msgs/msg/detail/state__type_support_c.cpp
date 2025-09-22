// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotvisionsystem_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "robotvisionsystem_msgs/msg/detail/state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotvisionsystem_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotvisionsystem_msgs/msg/detail/state__struct.h"
#include "robotvisionsystem_msgs/msg/detail/state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _State__ros_msg_type = robotvisionsystem_msgs__msg__State;

static bool _State__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _State__ros_msg_type * ros_message = static_cast<const _State__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr << ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr << ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr << ros_message->pos_z;
  }

  // Field name: rot_x
  {
    cdr << ros_message->rot_x;
  }

  // Field name: rot_y
  {
    cdr << ros_message->rot_y;
  }

  // Field name: rot_z
  {
    cdr << ros_message->rot_z;
  }

  // Field name: rot_w
  {
    cdr << ros_message->rot_w;
  }

  return true;
}

static bool _State__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _State__ros_msg_type * ros_message = static_cast<_State__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr >> ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr >> ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr >> ros_message->pos_z;
  }

  // Field name: rot_x
  {
    cdr >> ros_message->rot_x;
  }

  // Field name: rot_y
  {
    cdr >> ros_message->rot_y;
  }

  // Field name: rot_z
  {
    cdr >> ros_message->rot_z;
  }

  // Field name: rot_w
  {
    cdr >> ros_message->rot_w;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotvisionsystem_msgs
size_t get_serialized_size_robotvisionsystem_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _State__ros_msg_type * ros_message = static_cast<const _State__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_x
  {
    size_t item_size = sizeof(ros_message->pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_y
  {
    size_t item_size = sizeof(ros_message->pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_z
  {
    size_t item_size = sizeof(ros_message->pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rot_x
  {
    size_t item_size = sizeof(ros_message->rot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rot_y
  {
    size_t item_size = sizeof(ros_message->rot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rot_z
  {
    size_t item_size = sizeof(ros_message->rot_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rot_w
  {
    size_t item_size = sizeof(ros_message->rot_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _State__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotvisionsystem_msgs__msg__State(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotvisionsystem_msgs
size_t max_serialized_size_robotvisionsystem_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rot_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rot_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rot_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rot_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotvisionsystem_msgs__msg__State;
    is_plain =
      (
      offsetof(DataType, rot_w) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _State__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotvisionsystem_msgs__msg__State(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_State = {
  "robotvisionsystem_msgs::msg",
  "State",
  _State__cdr_serialize,
  _State__cdr_deserialize,
  _State__get_serialized_size,
  _State__max_serialized_size
};

static rosidl_message_type_support_t _State__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_State,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotvisionsystem_msgs, msg, State)() {
  return &_State__type_support;
}

#if defined(__cplusplus)
}
#endif
