// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Motorworkmodefb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/motorworkmodefb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Motorworkmodefb__init(segway_msgs__msg__Motorworkmodefb * msg)
{
  if (!msg) {
    return false;
  }
  // motor_work_mode
  return true;
}

void
segway_msgs__msg__Motorworkmodefb__fini(segway_msgs__msg__Motorworkmodefb * msg)
{
  if (!msg) {
    return;
  }
  // motor_work_mode
}

bool
segway_msgs__msg__Motorworkmodefb__are_equal(const segway_msgs__msg__Motorworkmodefb * lhs, const segway_msgs__msg__Motorworkmodefb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_work_mode
  if (lhs->motor_work_mode != rhs->motor_work_mode) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Motorworkmodefb__copy(
  const segway_msgs__msg__Motorworkmodefb * input,
  segway_msgs__msg__Motorworkmodefb * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_work_mode
  output->motor_work_mode = input->motor_work_mode;
  return true;
}

segway_msgs__msg__Motorworkmodefb *
segway_msgs__msg__Motorworkmodefb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Motorworkmodefb * msg = (segway_msgs__msg__Motorworkmodefb *)allocator.allocate(sizeof(segway_msgs__msg__Motorworkmodefb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Motorworkmodefb));
  bool success = segway_msgs__msg__Motorworkmodefb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Motorworkmodefb__destroy(segway_msgs__msg__Motorworkmodefb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Motorworkmodefb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Motorworkmodefb__Sequence__init(segway_msgs__msg__Motorworkmodefb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Motorworkmodefb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Motorworkmodefb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Motorworkmodefb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Motorworkmodefb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Motorworkmodefb__fini(&data[i - 1]);
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
segway_msgs__msg__Motorworkmodefb__Sequence__fini(segway_msgs__msg__Motorworkmodefb__Sequence * array)
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
      segway_msgs__msg__Motorworkmodefb__fini(&array->data[i]);
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

segway_msgs__msg__Motorworkmodefb__Sequence *
segway_msgs__msg__Motorworkmodefb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Motorworkmodefb__Sequence * array = (segway_msgs__msg__Motorworkmodefb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Motorworkmodefb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Motorworkmodefb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Motorworkmodefb__Sequence__destroy(segway_msgs__msg__Motorworkmodefb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Motorworkmodefb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Motorworkmodefb__Sequence__are_equal(const segway_msgs__msg__Motorworkmodefb__Sequence * lhs, const segway_msgs__msg__Motorworkmodefb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Motorworkmodefb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Motorworkmodefb__Sequence__copy(
  const segway_msgs__msg__Motorworkmodefb__Sequence * input,
  segway_msgs__msg__Motorworkmodefb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Motorworkmodefb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Motorworkmodefb * data =
      (segway_msgs__msg__Motorworkmodefb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Motorworkmodefb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Motorworkmodefb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Motorworkmodefb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
