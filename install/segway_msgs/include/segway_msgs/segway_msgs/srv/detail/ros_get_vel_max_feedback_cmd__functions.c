// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__init(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ros_getvel_max_fbcmd
  return true;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__fini(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // ros_getvel_max_fbcmd
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__are_equal(const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * lhs, const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ros_getvel_max_fbcmd
  if (lhs->ros_getvel_max_fbcmd != rhs->ros_getvel_max_fbcmd) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__copy(
  const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * input,
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ros_getvel_max_fbcmd
  output->ros_getvel_max_fbcmd = input->ros_getvel_max_fbcmd;
  return true;
}

segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request *
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * msg = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request *)allocator.allocate(sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request));
  bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__destroy(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__init(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__fini(&data[i - 1]);
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
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__fini(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * array)
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
      segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__fini(&array->data[i]);
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

segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence *
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * array = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__destroy(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__are_equal(const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * lhs, const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence__copy(
  const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * input,
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request * data =
      (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__init(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // forward_maxvel_fb
  // backward_maxvel_fb
  // angular_maxvel_fb
  return true;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__fini(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // forward_maxvel_fb
  // backward_maxvel_fb
  // angular_maxvel_fb
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__are_equal(const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * lhs, const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // forward_maxvel_fb
  if (lhs->forward_maxvel_fb != rhs->forward_maxvel_fb) {
    return false;
  }
  // backward_maxvel_fb
  if (lhs->backward_maxvel_fb != rhs->backward_maxvel_fb) {
    return false;
  }
  // angular_maxvel_fb
  if (lhs->angular_maxvel_fb != rhs->angular_maxvel_fb) {
    return false;
  }
  return true;
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__copy(
  const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * input,
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // forward_maxvel_fb
  output->forward_maxvel_fb = input->forward_maxvel_fb;
  // backward_maxvel_fb
  output->backward_maxvel_fb = input->backward_maxvel_fb;
  // angular_maxvel_fb
  output->angular_maxvel_fb = input->angular_maxvel_fb;
  return true;
}

segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response *
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * msg = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response *)allocator.allocate(sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response));
  bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__destroy(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__init(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * data = NULL;

  if (size) {
    data = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response *)allocator.zero_allocate(size, sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__fini(&data[i - 1]);
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
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__fini(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * array)
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
      segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__fini(&array->data[i]);
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

segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence *
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * array = (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence *)allocator.allocate(sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__destroy(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__are_equal(const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * lhs, const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence__copy(
  const segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * input,
  segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response * data =
      (segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
