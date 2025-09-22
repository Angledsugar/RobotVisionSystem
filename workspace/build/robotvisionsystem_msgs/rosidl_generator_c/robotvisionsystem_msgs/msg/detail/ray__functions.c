// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotvisionsystem_msgs:msg/Ray.idl
// generated code does not contain a copyright notice
#include "robotvisionsystem_msgs/msg/detail/ray__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotvisionsystem_msgs__msg__Ray__init(robotvisionsystem_msgs__msg__Ray * msg)
{
  if (!msg) {
    return false;
  }
  // ray_array
  return true;
}

void
robotvisionsystem_msgs__msg__Ray__fini(robotvisionsystem_msgs__msg__Ray * msg)
{
  if (!msg) {
    return;
  }
  // ray_array
}

bool
robotvisionsystem_msgs__msg__Ray__are_equal(const robotvisionsystem_msgs__msg__Ray * lhs, const robotvisionsystem_msgs__msg__Ray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ray_array
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->ray_array[i] != rhs->ray_array[i]) {
      return false;
    }
  }
  return true;
}

bool
robotvisionsystem_msgs__msg__Ray__copy(
  const robotvisionsystem_msgs__msg__Ray * input,
  robotvisionsystem_msgs__msg__Ray * output)
{
  if (!input || !output) {
    return false;
  }
  // ray_array
  for (size_t i = 0; i < 12; ++i) {
    output->ray_array[i] = input->ray_array[i];
  }
  return true;
}

robotvisionsystem_msgs__msg__Ray *
robotvisionsystem_msgs__msg__Ray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Ray * msg = (robotvisionsystem_msgs__msg__Ray *)allocator.allocate(sizeof(robotvisionsystem_msgs__msg__Ray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotvisionsystem_msgs__msg__Ray));
  bool success = robotvisionsystem_msgs__msg__Ray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotvisionsystem_msgs__msg__Ray__destroy(robotvisionsystem_msgs__msg__Ray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotvisionsystem_msgs__msg__Ray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotvisionsystem_msgs__msg__Ray__Sequence__init(robotvisionsystem_msgs__msg__Ray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Ray * data = NULL;

  if (size) {
    data = (robotvisionsystem_msgs__msg__Ray *)allocator.zero_allocate(size, sizeof(robotvisionsystem_msgs__msg__Ray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotvisionsystem_msgs__msg__Ray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotvisionsystem_msgs__msg__Ray__fini(&data[i - 1]);
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
robotvisionsystem_msgs__msg__Ray__Sequence__fini(robotvisionsystem_msgs__msg__Ray__Sequence * array)
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
      robotvisionsystem_msgs__msg__Ray__fini(&array->data[i]);
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

robotvisionsystem_msgs__msg__Ray__Sequence *
robotvisionsystem_msgs__msg__Ray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotvisionsystem_msgs__msg__Ray__Sequence * array = (robotvisionsystem_msgs__msg__Ray__Sequence *)allocator.allocate(sizeof(robotvisionsystem_msgs__msg__Ray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotvisionsystem_msgs__msg__Ray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotvisionsystem_msgs__msg__Ray__Sequence__destroy(robotvisionsystem_msgs__msg__Ray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotvisionsystem_msgs__msg__Ray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotvisionsystem_msgs__msg__Ray__Sequence__are_equal(const robotvisionsystem_msgs__msg__Ray__Sequence * lhs, const robotvisionsystem_msgs__msg__Ray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotvisionsystem_msgs__msg__Ray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotvisionsystem_msgs__msg__Ray__Sequence__copy(
  const robotvisionsystem_msgs__msg__Ray__Sequence * input,
  robotvisionsystem_msgs__msg__Ray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotvisionsystem_msgs__msg__Ray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotvisionsystem_msgs__msg__Ray * data =
      (robotvisionsystem_msgs__msg__Ray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotvisionsystem_msgs__msg__Ray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotvisionsystem_msgs__msg__Ray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotvisionsystem_msgs__msg__Ray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
