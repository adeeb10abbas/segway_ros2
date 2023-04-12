// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Bmsfb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/bmsfb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__Bmsfb__init(segway_msgs__msg__Bmsfb * msg)
{
  if (!msg) {
    return false;
  }
  // bat_soc
  // bat_charging
  // bat_vol
  // bat_current
  // bat_temp
  return true;
}

void
segway_msgs__msg__Bmsfb__fini(segway_msgs__msg__Bmsfb * msg)
{
  if (!msg) {
    return;
  }
  // bat_soc
  // bat_charging
  // bat_vol
  // bat_current
  // bat_temp
}

bool
segway_msgs__msg__Bmsfb__are_equal(const segway_msgs__msg__Bmsfb * lhs, const segway_msgs__msg__Bmsfb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bat_soc
  if (lhs->bat_soc != rhs->bat_soc) {
    return false;
  }
  // bat_charging
  if (lhs->bat_charging != rhs->bat_charging) {
    return false;
  }
  // bat_vol
  if (lhs->bat_vol != rhs->bat_vol) {
    return false;
  }
  // bat_current
  if (lhs->bat_current != rhs->bat_current) {
    return false;
  }
  // bat_temp
  if (lhs->bat_temp != rhs->bat_temp) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Bmsfb__copy(
  const segway_msgs__msg__Bmsfb * input,
  segway_msgs__msg__Bmsfb * output)
{
  if (!input || !output) {
    return false;
  }
  // bat_soc
  output->bat_soc = input->bat_soc;
  // bat_charging
  output->bat_charging = input->bat_charging;
  // bat_vol
  output->bat_vol = input->bat_vol;
  // bat_current
  output->bat_current = input->bat_current;
  // bat_temp
  output->bat_temp = input->bat_temp;
  return true;
}

segway_msgs__msg__Bmsfb *
segway_msgs__msg__Bmsfb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Bmsfb * msg = (segway_msgs__msg__Bmsfb *)allocator.allocate(sizeof(segway_msgs__msg__Bmsfb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Bmsfb));
  bool success = segway_msgs__msg__Bmsfb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Bmsfb__destroy(segway_msgs__msg__Bmsfb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Bmsfb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Bmsfb__Sequence__init(segway_msgs__msg__Bmsfb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Bmsfb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Bmsfb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Bmsfb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Bmsfb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Bmsfb__fini(&data[i - 1]);
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
segway_msgs__msg__Bmsfb__Sequence__fini(segway_msgs__msg__Bmsfb__Sequence * array)
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
      segway_msgs__msg__Bmsfb__fini(&array->data[i]);
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

segway_msgs__msg__Bmsfb__Sequence *
segway_msgs__msg__Bmsfb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Bmsfb__Sequence * array = (segway_msgs__msg__Bmsfb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Bmsfb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Bmsfb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Bmsfb__Sequence__destroy(segway_msgs__msg__Bmsfb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Bmsfb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Bmsfb__Sequence__are_equal(const segway_msgs__msg__Bmsfb__Sequence * lhs, const segway_msgs__msg__Bmsfb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Bmsfb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Bmsfb__Sequence__copy(
  const segway_msgs__msg__Bmsfb__Sequence * input,
  segway_msgs__msg__Bmsfb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Bmsfb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Bmsfb * data =
      (segway_msgs__msg__Bmsfb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Bmsfb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Bmsfb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Bmsfb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
