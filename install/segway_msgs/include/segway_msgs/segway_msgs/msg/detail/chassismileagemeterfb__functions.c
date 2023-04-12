// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Chassismileagemeterfb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/chassismileagemeterfb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Chassismileagemeterfb__init(segway_msgs__msg__Chassismileagemeterfb * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_meters
  return true;
}

void
segway_msgs__msg__Chassismileagemeterfb__fini(segway_msgs__msg__Chassismileagemeterfb * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_meters
}

bool
segway_msgs__msg__Chassismileagemeterfb__are_equal(const segway_msgs__msg__Chassismileagemeterfb * lhs, const segway_msgs__msg__Chassismileagemeterfb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_meters
  if (lhs->vehicle_meters != rhs->vehicle_meters) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Chassismileagemeterfb__copy(
  const segway_msgs__msg__Chassismileagemeterfb * input,
  segway_msgs__msg__Chassismileagemeterfb * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_meters
  output->vehicle_meters = input->vehicle_meters;
  return true;
}

segway_msgs__msg__Chassismileagemeterfb *
segway_msgs__msg__Chassismileagemeterfb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Chassismileagemeterfb * msg = (segway_msgs__msg__Chassismileagemeterfb *)allocator.allocate(sizeof(segway_msgs__msg__Chassismileagemeterfb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Chassismileagemeterfb));
  bool success = segway_msgs__msg__Chassismileagemeterfb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Chassismileagemeterfb__destroy(segway_msgs__msg__Chassismileagemeterfb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Chassismileagemeterfb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Chassismileagemeterfb__Sequence__init(segway_msgs__msg__Chassismileagemeterfb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Chassismileagemeterfb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Chassismileagemeterfb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Chassismileagemeterfb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Chassismileagemeterfb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Chassismileagemeterfb__fini(&data[i - 1]);
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
segway_msgs__msg__Chassismileagemeterfb__Sequence__fini(segway_msgs__msg__Chassismileagemeterfb__Sequence * array)
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
      segway_msgs__msg__Chassismileagemeterfb__fini(&array->data[i]);
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

segway_msgs__msg__Chassismileagemeterfb__Sequence *
segway_msgs__msg__Chassismileagemeterfb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Chassismileagemeterfb__Sequence * array = (segway_msgs__msg__Chassismileagemeterfb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Chassismileagemeterfb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Chassismileagemeterfb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Chassismileagemeterfb__Sequence__destroy(segway_msgs__msg__Chassismileagemeterfb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Chassismileagemeterfb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Chassismileagemeterfb__Sequence__are_equal(const segway_msgs__msg__Chassismileagemeterfb__Sequence * lhs, const segway_msgs__msg__Chassismileagemeterfb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Chassismileagemeterfb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Chassismileagemeterfb__Sequence__copy(
  const segway_msgs__msg__Chassismileagemeterfb__Sequence * input,
  segway_msgs__msg__Chassismileagemeterfb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Chassismileagemeterfb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Chassismileagemeterfb * data =
      (segway_msgs__msg__Chassismileagemeterfb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Chassismileagemeterfb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Chassismileagemeterfb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Chassismileagemeterfb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
