// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Errorcodefb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/errorcodefb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Errorcodefb__init(segway_msgs__msg__Errorcodefb * msg)
{
  if (!msg) {
    return false;
  }
  // host_error
  // central_error
  // front_left_motor_error
  // front_right_motor_error
  // rear_left_motor_error
  // rear_right_motor_error
  // bms_error
  // brake_error
  return true;
}

void
segway_msgs__msg__Errorcodefb__fini(segway_msgs__msg__Errorcodefb * msg)
{
  if (!msg) {
    return;
  }
  // host_error
  // central_error
  // front_left_motor_error
  // front_right_motor_error
  // rear_left_motor_error
  // rear_right_motor_error
  // bms_error
  // brake_error
}

bool
segway_msgs__msg__Errorcodefb__are_equal(const segway_msgs__msg__Errorcodefb * lhs, const segway_msgs__msg__Errorcodefb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // host_error
  if (lhs->host_error != rhs->host_error) {
    return false;
  }
  // central_error
  if (lhs->central_error != rhs->central_error) {
    return false;
  }
  // front_left_motor_error
  if (lhs->front_left_motor_error != rhs->front_left_motor_error) {
    return false;
  }
  // front_right_motor_error
  if (lhs->front_right_motor_error != rhs->front_right_motor_error) {
    return false;
  }
  // rear_left_motor_error
  if (lhs->rear_left_motor_error != rhs->rear_left_motor_error) {
    return false;
  }
  // rear_right_motor_error
  if (lhs->rear_right_motor_error != rhs->rear_right_motor_error) {
    return false;
  }
  // bms_error
  if (lhs->bms_error != rhs->bms_error) {
    return false;
  }
  // brake_error
  if (lhs->brake_error != rhs->brake_error) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Errorcodefb__copy(
  const segway_msgs__msg__Errorcodefb * input,
  segway_msgs__msg__Errorcodefb * output)
{
  if (!input || !output) {
    return false;
  }
  // host_error
  output->host_error = input->host_error;
  // central_error
  output->central_error = input->central_error;
  // front_left_motor_error
  output->front_left_motor_error = input->front_left_motor_error;
  // front_right_motor_error
  output->front_right_motor_error = input->front_right_motor_error;
  // rear_left_motor_error
  output->rear_left_motor_error = input->rear_left_motor_error;
  // rear_right_motor_error
  output->rear_right_motor_error = input->rear_right_motor_error;
  // bms_error
  output->bms_error = input->bms_error;
  // brake_error
  output->brake_error = input->brake_error;
  return true;
}

segway_msgs__msg__Errorcodefb *
segway_msgs__msg__Errorcodefb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Errorcodefb * msg = (segway_msgs__msg__Errorcodefb *)allocator.allocate(sizeof(segway_msgs__msg__Errorcodefb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Errorcodefb));
  bool success = segway_msgs__msg__Errorcodefb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Errorcodefb__destroy(segway_msgs__msg__Errorcodefb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Errorcodefb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Errorcodefb__Sequence__init(segway_msgs__msg__Errorcodefb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Errorcodefb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Errorcodefb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Errorcodefb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Errorcodefb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Errorcodefb__fini(&data[i - 1]);
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
segway_msgs__msg__Errorcodefb__Sequence__fini(segway_msgs__msg__Errorcodefb__Sequence * array)
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
      segway_msgs__msg__Errorcodefb__fini(&array->data[i]);
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

segway_msgs__msg__Errorcodefb__Sequence *
segway_msgs__msg__Errorcodefb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Errorcodefb__Sequence * array = (segway_msgs__msg__Errorcodefb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Errorcodefb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Errorcodefb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Errorcodefb__Sequence__destroy(segway_msgs__msg__Errorcodefb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Errorcodefb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Errorcodefb__Sequence__are_equal(const segway_msgs__msg__Errorcodefb__Sequence * lhs, const segway_msgs__msg__Errorcodefb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Errorcodefb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Errorcodefb__Sequence__copy(
  const segway_msgs__msg__Errorcodefb__Sequence * input,
  segway_msgs__msg__Errorcodefb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Errorcodefb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Errorcodefb * data =
      (segway_msgs__msg__Errorcodefb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Errorcodefb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Errorcodefb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Errorcodefb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
