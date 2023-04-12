// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
segway_msgs__srv__RosGetSwVersionCmd_Request__init(segway_msgs__srv__RosGetSwVersionCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ros_getsw_version_cmd
  return true;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Request__fini(segway_msgs__srv__RosGetSwVersionCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // ros_getsw_version_cmd
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Request__are_equal(const segway_msgs__srv__RosGetSwVersionCmd_Request * lhs, const segway_msgs__srv__RosGetSwVersionCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ros_getsw_version_cmd
  if (lhs->ros_getsw_version_cmd != rhs->ros_getsw_version_cmd) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Request__copy(
  const segway_msgs__srv__RosGetSwVersionCmd_Request * input,
  segway_msgs__srv__RosGetSwVersionCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ros_getsw_version_cmd
  output->ros_getsw_version_cmd = input->ros_getsw_version_cmd;
  return true;
}

segway_msgs__srv__RosGetSwVersionCmd_Request *
segway_msgs__srv__RosGetSwVersionCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Request * msg = (segway_msgs__srv__RosGetSwVersionCmd_Request *)allocator.allocate(sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request));
  bool success = segway_msgs__srv__RosGetSwVersionCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Request__destroy(segway_msgs__srv__RosGetSwVersionCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosGetSwVersionCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__init(segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Request * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosGetSwVersionCmd_Request *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosGetSwVersionCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosGetSwVersionCmd_Request__fini(&data[i - 1]);
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
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__fini(segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * array)
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
      segway_msgs__srv__RosGetSwVersionCmd_Request__fini(&array->data[i]);
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

segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence *
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * array = (segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__destroy(segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__are_equal(const segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * lhs, const segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosGetSwVersionCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence__copy(
  const segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * input,
  segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosGetSwVersionCmd_Request * data =
      (segway_msgs__srv__RosGetSwVersionCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosGetSwVersionCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosGetSwVersionCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosGetSwVersionCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
segway_msgs__srv__RosGetSwVersionCmd_Response__init(segway_msgs__srv__RosGetSwVersionCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // host_version
  // host_pantchversion
  // central_version
  // motor_version
  return true;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Response__fini(segway_msgs__srv__RosGetSwVersionCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // host_version
  // host_pantchversion
  // central_version
  // motor_version
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Response__are_equal(const segway_msgs__srv__RosGetSwVersionCmd_Response * lhs, const segway_msgs__srv__RosGetSwVersionCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // host_version
  if (lhs->host_version != rhs->host_version) {
    return false;
  }
  // host_pantchversion
  if (lhs->host_pantchversion != rhs->host_pantchversion) {
    return false;
  }
  // central_version
  if (lhs->central_version != rhs->central_version) {
    return false;
  }
  // motor_version
  if (lhs->motor_version != rhs->motor_version) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Response__copy(
  const segway_msgs__srv__RosGetSwVersionCmd_Response * input,
  segway_msgs__srv__RosGetSwVersionCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // host_version
  output->host_version = input->host_version;
  // host_pantchversion
  output->host_pantchversion = input->host_pantchversion;
  // central_version
  output->central_version = input->central_version;
  // motor_version
  output->motor_version = input->motor_version;
  return true;
}

segway_msgs__srv__RosGetSwVersionCmd_Response *
segway_msgs__srv__RosGetSwVersionCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Response * msg = (segway_msgs__srv__RosGetSwVersionCmd_Response *)allocator.allocate(sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response));
  bool success = segway_msgs__srv__RosGetSwVersionCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Response__destroy(segway_msgs__srv__RosGetSwVersionCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosGetSwVersionCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__init(segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Response * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosGetSwVersionCmd_Response *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosGetSwVersionCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosGetSwVersionCmd_Response__fini(&data[i - 1]);
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
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__fini(segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * array)
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
      segway_msgs__srv__RosGetSwVersionCmd_Response__fini(&array->data[i]);
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

segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence *
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * array = (segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__destroy(segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__are_equal(const segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * lhs, const segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosGetSwVersionCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence__copy(
  const segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * input,
  segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosGetSwVersionCmd_Response * data =
      (segway_msgs__srv__RosGetSwVersionCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosGetSwVersionCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosGetSwVersionCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosGetSwVersionCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
