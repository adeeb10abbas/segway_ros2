// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:srv/RosSetCfgRotateFunctionCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__init(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cfg_insitu_rotation_function
  return true;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__fini(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // cfg_insitu_rotation_function
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__are_equal(const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * lhs, const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cfg_insitu_rotation_function
  if (lhs->cfg_insitu_rotation_function != rhs->cfg_insitu_rotation_function) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__copy(
  const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * input,
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cfg_insitu_rotation_function
  output->cfg_insitu_rotation_function = input->cfg_insitu_rotation_function;
  return true;
}

segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request *
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * msg = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request *)allocator.allocate(sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request));
  bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__destroy(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__init(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__fini(&data[i - 1]);
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
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__fini(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * array)
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
      segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__fini(&array->data[i]);
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

segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence *
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * array = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__destroy(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__are_equal(const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * lhs, const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence__copy(
  const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * input,
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * data =
      (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__init(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cfg_insitu_rotation_result
  return true;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__fini(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // cfg_insitu_rotation_result
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__are_equal(const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * lhs, const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cfg_insitu_rotation_result
  if (lhs->cfg_insitu_rotation_result != rhs->cfg_insitu_rotation_result) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__copy(
  const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * input,
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cfg_insitu_rotation_result
  output->cfg_insitu_rotation_result = input->cfg_insitu_rotation_result;
  return true;
}

segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response *
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * msg = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response *)allocator.allocate(sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response));
  bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__destroy(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__init(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__fini(&data[i - 1]);
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
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__fini(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * array)
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
      segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__fini(&array->data[i]);
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

segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence *
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * array = (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__destroy(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__are_equal(const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * lhs, const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence__copy(
  const segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * input,
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * data =
      (segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
