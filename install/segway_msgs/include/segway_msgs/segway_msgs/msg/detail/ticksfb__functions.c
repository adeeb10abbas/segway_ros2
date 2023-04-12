// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Ticksfb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/ticksfb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Ticksfb__init(segway_msgs__msg__Ticksfb * msg)
{
  if (!msg) {
    return false;
  }
  // fl_ticks
  // fr_ticks
  // rl_ticks
  // rr_ticks
  // ticks_timestamp
  return true;
}

void
segway_msgs__msg__Ticksfb__fini(segway_msgs__msg__Ticksfb * msg)
{
  if (!msg) {
    return;
  }
  // fl_ticks
  // fr_ticks
  // rl_ticks
  // rr_ticks
  // ticks_timestamp
}

bool
segway_msgs__msg__Ticksfb__are_equal(const segway_msgs__msg__Ticksfb * lhs, const segway_msgs__msg__Ticksfb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fl_ticks
  if (lhs->fl_ticks != rhs->fl_ticks) {
    return false;
  }
  // fr_ticks
  if (lhs->fr_ticks != rhs->fr_ticks) {
    return false;
  }
  // rl_ticks
  if (lhs->rl_ticks != rhs->rl_ticks) {
    return false;
  }
  // rr_ticks
  if (lhs->rr_ticks != rhs->rr_ticks) {
    return false;
  }
  // ticks_timestamp
  if (lhs->ticks_timestamp != rhs->ticks_timestamp) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Ticksfb__copy(
  const segway_msgs__msg__Ticksfb * input,
  segway_msgs__msg__Ticksfb * output)
{
  if (!input || !output) {
    return false;
  }
  // fl_ticks
  output->fl_ticks = input->fl_ticks;
  // fr_ticks
  output->fr_ticks = input->fr_ticks;
  // rl_ticks
  output->rl_ticks = input->rl_ticks;
  // rr_ticks
  output->rr_ticks = input->rr_ticks;
  // ticks_timestamp
  output->ticks_timestamp = input->ticks_timestamp;
  return true;
}

segway_msgs__msg__Ticksfb *
segway_msgs__msg__Ticksfb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Ticksfb * msg = (segway_msgs__msg__Ticksfb *)allocator.allocate(sizeof(segway_msgs__msg__Ticksfb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Ticksfb));
  bool success = segway_msgs__msg__Ticksfb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Ticksfb__destroy(segway_msgs__msg__Ticksfb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Ticksfb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Ticksfb__Sequence__init(segway_msgs__msg__Ticksfb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Ticksfb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Ticksfb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Ticksfb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Ticksfb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Ticksfb__fini(&data[i - 1]);
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
segway_msgs__msg__Ticksfb__Sequence__fini(segway_msgs__msg__Ticksfb__Sequence * array)
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
      segway_msgs__msg__Ticksfb__fini(&array->data[i]);
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

segway_msgs__msg__Ticksfb__Sequence *
segway_msgs__msg__Ticksfb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Ticksfb__Sequence * array = (segway_msgs__msg__Ticksfb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Ticksfb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Ticksfb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Ticksfb__Sequence__destroy(segway_msgs__msg__Ticksfb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Ticksfb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Ticksfb__Sequence__are_equal(const segway_msgs__msg__Ticksfb__Sequence * lhs, const segway_msgs__msg__Ticksfb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Ticksfb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Ticksfb__Sequence__copy(
  const segway_msgs__msg__Ticksfb__Sequence * input,
  segway_msgs__msg__Ticksfb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Ticksfb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Ticksfb * data =
      (segway_msgs__msg__Ticksfb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Ticksfb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Ticksfb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Ticksfb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
