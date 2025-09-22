// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
// generated code does not contain a copyright notice
#include "robotvisionsystem_msgs/msg/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotvisionsystem_msgs__msg__Motor__init(robotvisionsystem_msgs__msg__Motor * msg)
{
  if (!msg) {
    return false;
  }
  // steer
  // motorspeed
  // breakbool
  return true;
}

void
robotvisionsystem_msgs__msg__Motor__fini(robotvisionsystem_msgs__msg__Motor * msg)
{
  if (!msg) {
    return;
  }
  // steer
  // motorspeed
  // breakbool
}

bool
robotvisionsystem_msgs__msg__Motor__are_equal(const robotvisionsystem_msgs__msg__Motor * lhs, const robotvisionsystem_msgs__msg__Motor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  // motorspeed
  if (lhs->motorspeed != rhs->motorspeed) {
    return false;
  }
  // breakbool
  if (lhs->breakbool != rhs->breakbool) {
    return false;
  }
  return true;
}

bool
robotvisionsystem_msgs__msg__Motor__copy(
  const robotvisionsystem_msgs__msg__Motor * input,
  robotvisionsystem_msgs__msg__Motor * output)
{
  if (!input || !output) {
    return false;
  }
  // steer
  output->steer = input->steer;
  // motorspeed
  output->motorspeed = input->motorspeed;
  // breakbool
  output->breakbool = input->breakbool;
  return true;
}

robotvisionsystem_msgs__msg__Motor *
robotvisionsystem_msgs__msg__Motor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Motor * msg = (robotvisionsystem_msgs__msg__Motor *)allocator.allocate(sizeof(robotvisionsystem_msgs__msg__Motor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotvisionsystem_msgs__msg__Motor));
  bool success = robotvisionsystem_msgs__msg__Motor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotvisionsystem_msgs__msg__Motor__destroy(robotvisionsystem_msgs__msg__Motor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotvisionsystem_msgs__msg__Motor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotvisionsystem_msgs__msg__Motor__Sequence__init(robotvisionsystem_msgs__msg__Motor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Motor * data = NULL;

  if (size) {
    data = (robotvisionsystem_msgs__msg__Motor *)allocator.zero_allocate(size, sizeof(robotvisionsystem_msgs__msg__Motor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotvisionsystem_msgs__msg__Motor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotvisionsystem_msgs__msg__Motor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotvisionsystem_msgs__msg__Motor__Sequence__fini(robotvisionsystem_msgs__msg__Motor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotvisionsystem_msgs__msg__Motor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotvisionsystem_msgs__msg__Motor__Sequence *
robotvisionsystem_msgs__msg__Motor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Motor__Sequence * array = (robotvisionsystem_msgs__msg__Motor__Sequence *)allocator.allocate(sizeof(robotvisionsystem_msgs__msg__Motor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotvisionsystem_msgs__msg__Motor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotvisionsystem_msgs__msg__Motor__Sequence__destroy(robotvisionsystem_msgs__msg__Motor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotvisionsystem_msgs__msg__Motor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotvisionsystem_msgs__msg__Motor__Sequence__are_equal(const robotvisionsystem_msgs__msg__Motor__Sequence * lhs, const robotvisionsystem_msgs__msg__Motor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotvisionsystem_msgs__msg__Motor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotvisionsystem_msgs__msg__Motor__Sequence__copy(
  const robotvisionsystem_msgs__msg__Motor__Sequence * input,
  robotvisionsystem_msgs__msg__Motor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotvisionsystem_msgs__msg__Motor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotvisionsystem_msgs__msg__Motor * data =
      (robotvisionsystem_msgs__msg__Motor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotvisionsystem_msgs__msg__Motor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotvisionsystem_msgs__msg__Motor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotvisionsystem_msgs__msg__Motor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
