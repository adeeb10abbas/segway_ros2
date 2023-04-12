// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/action/detail/ros_set_iap_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__action__RosSetIapCmd_Goal__init(segway_msgs__action__RosSetIapCmd_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // board_index_for_iap
  return true;
}

void
segway_msgs__action__RosSetIapCmd_Goal__fini(segway_msgs__action__RosSetIapCmd_Goal * msg)
{
  if (!msg) {
    return;
  }
  // board_index_for_iap
}

bool
segway_msgs__action__RosSetIapCmd_Goal__are_equal(const segway_msgs__action__RosSetIapCmd_Goal * lhs, const segway_msgs__action__RosSetIapCmd_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board_index_for_iap
  if (lhs->board_index_for_iap != rhs->board_index_for_iap) {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Goal__copy(
  const segway_msgs__action__RosSetIapCmd_Goal * input,
  segway_msgs__action__RosSetIapCmd_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // board_index_for_iap
  output->board_index_for_iap = input->board_index_for_iap;
  return true;
}

segway_msgs__action__RosSetIapCmd_Goal *
segway_msgs__action__RosSetIapCmd_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Goal * msg = (segway_msgs__action__RosSetIapCmd_Goal *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_Goal));
  bool success = segway_msgs__action__RosSetIapCmd_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_Goal__destroy(segway_msgs__action__RosSetIapCmd_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_Goal__Sequence__init(segway_msgs__action__RosSetIapCmd_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Goal * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_Goal *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_Goal__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_Goal__Sequence__fini(segway_msgs__action__RosSetIapCmd_Goal__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_Goal__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_Goal__Sequence *
segway_msgs__action__RosSetIapCmd_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Goal__Sequence * array = (segway_msgs__action__RosSetIapCmd_Goal__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_Goal__Sequence__destroy(segway_msgs__action__RosSetIapCmd_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_Goal__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_Goal__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Goal__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_Goal__Sequence * input,
  segway_msgs__action__RosSetIapCmd_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_Goal * data =
      (segway_msgs__action__RosSetIapCmd_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
segway_msgs__action__RosSetIapCmd_Result__init(segway_msgs__action__RosSetIapCmd_Result * msg)
{
  if (!msg) {
    return false;
  }
  // iap_result
  // error_code
  return true;
}

void
segway_msgs__action__RosSetIapCmd_Result__fini(segway_msgs__action__RosSetIapCmd_Result * msg)
{
  if (!msg) {
    return;
  }
  // iap_result
  // error_code
}

bool
segway_msgs__action__RosSetIapCmd_Result__are_equal(const segway_msgs__action__RosSetIapCmd_Result * lhs, const segway_msgs__action__RosSetIapCmd_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iap_result
  if (lhs->iap_result != rhs->iap_result) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Result__copy(
  const segway_msgs__action__RosSetIapCmd_Result * input,
  segway_msgs__action__RosSetIapCmd_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // iap_result
  output->iap_result = input->iap_result;
  // error_code
  output->error_code = input->error_code;
  return true;
}

segway_msgs__action__RosSetIapCmd_Result *
segway_msgs__action__RosSetIapCmd_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Result * msg = (segway_msgs__action__RosSetIapCmd_Result *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_Result));
  bool success = segway_msgs__action__RosSetIapCmd_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_Result__destroy(segway_msgs__action__RosSetIapCmd_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_Result__Sequence__init(segway_msgs__action__RosSetIapCmd_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Result * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_Result *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_Result__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_Result__Sequence__fini(segway_msgs__action__RosSetIapCmd_Result__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_Result__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_Result__Sequence *
segway_msgs__action__RosSetIapCmd_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Result__Sequence * array = (segway_msgs__action__RosSetIapCmd_Result__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_Result__Sequence__destroy(segway_msgs__action__RosSetIapCmd_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_Result__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_Result__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Result__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_Result__Sequence * input,
  segway_msgs__action__RosSetIapCmd_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_Result * data =
      (segway_msgs__action__RosSetIapCmd_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
segway_msgs__action__RosSetIapCmd_Feedback__init(segway_msgs__action__RosSetIapCmd_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // iap_percent
  return true;
}

void
segway_msgs__action__RosSetIapCmd_Feedback__fini(segway_msgs__action__RosSetIapCmd_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // iap_percent
}

bool
segway_msgs__action__RosSetIapCmd_Feedback__are_equal(const segway_msgs__action__RosSetIapCmd_Feedback * lhs, const segway_msgs__action__RosSetIapCmd_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iap_percent
  if (lhs->iap_percent != rhs->iap_percent) {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Feedback__copy(
  const segway_msgs__action__RosSetIapCmd_Feedback * input,
  segway_msgs__action__RosSetIapCmd_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // iap_percent
  output->iap_percent = input->iap_percent;
  return true;
}

segway_msgs__action__RosSetIapCmd_Feedback *
segway_msgs__action__RosSetIapCmd_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Feedback * msg = (segway_msgs__action__RosSetIapCmd_Feedback *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_Feedback));
  bool success = segway_msgs__action__RosSetIapCmd_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_Feedback__destroy(segway_msgs__action__RosSetIapCmd_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__init(segway_msgs__action__RosSetIapCmd_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Feedback * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_Feedback *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_Feedback__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__fini(segway_msgs__action__RosSetIapCmd_Feedback__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_Feedback__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_Feedback__Sequence *
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_Feedback__Sequence * array = (segway_msgs__action__RosSetIapCmd_Feedback__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__destroy(segway_msgs__action__RosSetIapCmd_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_Feedback__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_Feedback__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_Feedback__Sequence * input,
  segway_msgs__action__RosSetIapCmd_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_Feedback * data =
      (segway_msgs__action__RosSetIapCmd_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__functions.h"

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__init(segway_msgs__action__RosSetIapCmd_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!segway_msgs__action__RosSetIapCmd_Goal__init(&msg->goal)) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(segway_msgs__action__RosSetIapCmd_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  segway_msgs__action__RosSetIapCmd_Goal__fini(&msg->goal);
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__are_equal(const segway_msgs__action__RosSetIapCmd_SendGoal_Request * lhs, const segway_msgs__action__RosSetIapCmd_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!segway_msgs__action__RosSetIapCmd_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__copy(
  const segway_msgs__action__RosSetIapCmd_SendGoal_Request * input,
  segway_msgs__action__RosSetIapCmd_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!segway_msgs__action__RosSetIapCmd_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

segway_msgs__action__RosSetIapCmd_SendGoal_Request *
segway_msgs__action__RosSetIapCmd_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Request * msg = (segway_msgs__action__RosSetIapCmd_SendGoal_Request *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Request));
  bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Request__destroy(segway_msgs__action__RosSetIapCmd_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__init(segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Request * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_SendGoal_Request *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__fini(segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence *
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * array = (segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__destroy(segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * input,
  segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_SendGoal_Request * data =
      (segway_msgs__action__RosSetIapCmd_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__init(segway_msgs__action__RosSetIapCmd_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(segway_msgs__action__RosSetIapCmd_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__are_equal(const segway_msgs__action__RosSetIapCmd_SendGoal_Response * lhs, const segway_msgs__action__RosSetIapCmd_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__copy(
  const segway_msgs__action__RosSetIapCmd_SendGoal_Response * input,
  segway_msgs__action__RosSetIapCmd_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

segway_msgs__action__RosSetIapCmd_SendGoal_Response *
segway_msgs__action__RosSetIapCmd_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Response * msg = (segway_msgs__action__RosSetIapCmd_SendGoal_Response *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Response));
  bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Response__destroy(segway_msgs__action__RosSetIapCmd_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__init(segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Response * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_SendGoal_Response *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__fini(segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence *
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * array = (segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__destroy(segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * input,
  segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_SendGoal_Response * data =
      (segway_msgs__action__RosSetIapCmd_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__init(segway_msgs__action__RosSetIapCmd_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(segway_msgs__action__RosSetIapCmd_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__are_equal(const segway_msgs__action__RosSetIapCmd_GetResult_Request * lhs, const segway_msgs__action__RosSetIapCmd_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__copy(
  const segway_msgs__action__RosSetIapCmd_GetResult_Request * input,
  segway_msgs__action__RosSetIapCmd_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

segway_msgs__action__RosSetIapCmd_GetResult_Request *
segway_msgs__action__RosSetIapCmd_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Request * msg = (segway_msgs__action__RosSetIapCmd_GetResult_Request *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Request));
  bool success = segway_msgs__action__RosSetIapCmd_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Request__destroy(segway_msgs__action__RosSetIapCmd_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__init(segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Request * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_GetResult_Request *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__fini(segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence *
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * array = (segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__destroy(segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * input,
  segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_GetResult_Request * data =
      (segway_msgs__action__RosSetIapCmd_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__functions.h"

bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__init(segway_msgs__action__RosSetIapCmd_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!segway_msgs__action__RosSetIapCmd_Result__init(&msg->result)) {
    segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(segway_msgs__action__RosSetIapCmd_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  segway_msgs__action__RosSetIapCmd_Result__fini(&msg->result);
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__are_equal(const segway_msgs__action__RosSetIapCmd_GetResult_Response * lhs, const segway_msgs__action__RosSetIapCmd_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!segway_msgs__action__RosSetIapCmd_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__copy(
  const segway_msgs__action__RosSetIapCmd_GetResult_Response * input,
  segway_msgs__action__RosSetIapCmd_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!segway_msgs__action__RosSetIapCmd_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

segway_msgs__action__RosSetIapCmd_GetResult_Response *
segway_msgs__action__RosSetIapCmd_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Response * msg = (segway_msgs__action__RosSetIapCmd_GetResult_Response *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Response));
  bool success = segway_msgs__action__RosSetIapCmd_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Response__destroy(segway_msgs__action__RosSetIapCmd_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__init(segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Response * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_GetResult_Response *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__fini(segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence *
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * array = (segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__destroy(segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * input,
  segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_GetResult_Response * data =
      (segway_msgs__action__RosSetIapCmd_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__functions.h"

bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__init(segway_msgs__action__RosSetIapCmd_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!segway_msgs__action__RosSetIapCmd_Feedback__init(&msg->feedback)) {
    segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(segway_msgs__action__RosSetIapCmd_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  segway_msgs__action__RosSetIapCmd_Feedback__fini(&msg->feedback);
}

bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__are_equal(const segway_msgs__action__RosSetIapCmd_FeedbackMessage * lhs, const segway_msgs__action__RosSetIapCmd_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!segway_msgs__action__RosSetIapCmd_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__copy(
  const segway_msgs__action__RosSetIapCmd_FeedbackMessage * input,
  segway_msgs__action__RosSetIapCmd_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!segway_msgs__action__RosSetIapCmd_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

segway_msgs__action__RosSetIapCmd_FeedbackMessage *
segway_msgs__action__RosSetIapCmd_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_FeedbackMessage * msg = (segway_msgs__action__RosSetIapCmd_FeedbackMessage *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__action__RosSetIapCmd_FeedbackMessage));
  bool success = segway_msgs__action__RosSetIapCmd_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__action__RosSetIapCmd_FeedbackMessage__destroy(segway_msgs__action__RosSetIapCmd_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__init(segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_FeedbackMessage * data = NULL;

  if (size) {
    data = (segway_msgs__action__RosSetIapCmd_FeedbackMessage *)allocator.zero_allocate(size, sizeof(segway_msgs__action__RosSetIapCmd_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__action__RosSetIapCmd_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(&data[i - 1]);
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
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__fini(segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * array)
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
      segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(&array->data[i]);
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

segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence *
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * array = (segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence *)allocator.allocate(sizeof(segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__destroy(segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__are_equal(const segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * lhs, const segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence__copy(
  const segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * input,
  segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__action__RosSetIapCmd_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__action__RosSetIapCmd_FeedbackMessage * data =
      (segway_msgs__action__RosSetIapCmd_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__action__RosSetIapCmd_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__action__RosSetIapCmd_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__action__RosSetIapCmd_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
