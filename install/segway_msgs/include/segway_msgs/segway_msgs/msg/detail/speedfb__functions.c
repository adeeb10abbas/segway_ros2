// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Speedfb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/speedfb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Speedfb__init(segway_msgs__msg__Speedfb * msg)
{
  if (!msg) {
    return false;
  }
  // car_speed
  // turn_speed
  // fl_speed
  // fr_speed
  // rl_speed
  // rr_speed
  // speed_timestamp
  return true;
}

void
segway_msgs__msg__Speedfb__fini(segway_msgs__msg__Speedfb * msg)
{
  if (!msg) {
    return;
  }
  // car_speed
  // turn_speed
  // fl_speed
  // fr_speed
  // rl_speed
  // rr_speed
  // speed_timestamp
}

bool
segway_msgs__msg__Speedfb__are_equal(const segway_msgs__msg__Speedfb * lhs, const segway_msgs__msg__Speedfb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // car_speed
  if (lhs->car_speed != rhs->car_speed) {
    return false;
  }
  // turn_speed
  if (lhs->turn_speed != rhs->turn_speed) {
    return false;
  }
  // fl_speed
  if (lhs->fl_speed != rhs->fl_speed) {
    return false;
  }
  // fr_speed
  if (lhs->fr_speed != rhs->fr_speed) {
    return false;
  }
  // rl_speed
  if (lhs->rl_speed != rhs->rl_speed) {
    return false;
  }
  // rr_speed
  if (lhs->rr_speed != rhs->rr_speed) {
    return false;
  }
  // speed_timestamp
  if (lhs->speed_timestamp != rhs->speed_timestamp) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Speedfb__copy(
  const segway_msgs__msg__Speedfb * input,
  segway_msgs__msg__Speedfb * output)
{
  if (!input || !output) {
    return false;
  }
  // car_speed
  output->car_speed = input->car_speed;
  // turn_speed
  output->turn_speed = input->turn_speed;
  // fl_speed
  output->fl_speed = input->fl_speed;
  // fr_speed
  output->fr_speed = input->fr_speed;
  // rl_speed
  output->rl_speed = input->rl_speed;
  // rr_speed
  output->rr_speed = input->rr_speed;
  // speed_timestamp
  output->speed_timestamp = input->speed_timestamp;
  return true;
}

segway_msgs__msg__Speedfb *
segway_msgs__msg__Speedfb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Speedfb * msg = (segway_msgs__msg__Speedfb *)allocator.allocate(sizeof(segway_msgs__msg__Speedfb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Speedfb));
  bool success = segway_msgs__msg__Speedfb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Speedfb__destroy(segway_msgs__msg__Speedfb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Speedfb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Speedfb__Sequence__init(segway_msgs__msg__Speedfb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Speedfb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Speedfb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Speedfb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Speedfb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Speedfb__fini(&data[i - 1]);
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
segway_msgs__msg__Speedfb__Sequence__fini(segway_msgs__msg__Speedfb__Sequence * array)
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
      segway_msgs__msg__Speedfb__fini(&array->data[i]);
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

segway_msgs__msg__Speedfb__Sequence *
segway_msgs__msg__Speedfb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Speedfb__Sequence * array = (segway_msgs__msg__Speedfb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Speedfb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Speedfb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Speedfb__Sequence__destroy(segway_msgs__msg__Speedfb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Speedfb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Speedfb__Sequence__are_equal(const segway_msgs__msg__Speedfb__Sequence * lhs, const segway_msgs__msg__Speedfb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Speedfb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Speedfb__Sequence__copy(
  const segway_msgs__msg__Speedfb__Sequence * input,
  segway_msgs__msg__Speedfb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Speedfb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Speedfb * data =
      (segway_msgs__msg__Speedfb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Speedfb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Speedfb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Speedfb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
