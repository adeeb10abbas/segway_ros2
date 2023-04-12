// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:msg/Ticksfb.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/msg/detail/ticksfb__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/msg/detail/ticksfb__functions.h"
#include "segway_msgs/msg/detail/ticksfb__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__msg__Ticksfb__init(message_memory);
}

void segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_fini_function(void * message_memory)
{
  segway_msgs__msg__Ticksfb__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_member_array[5] = {
  {
    "fl_ticks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Ticksfb, fl_ticks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_ticks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Ticksfb, fr_ticks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl_ticks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Ticksfb, rl_ticks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_ticks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Ticksfb, rr_ticks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ticks_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Ticksfb, ticks_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_members = {
  "segway_msgs__msg",  // message namespace
  "Ticksfb",  // message name
  5,  // number of fields
  sizeof(segway_msgs__msg__Ticksfb),
  segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_member_array,  // message members
  segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_type_support_handle = {
  0,
  &segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, msg, Ticksfb)() {
  if (!segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_type_support_handle.typesupport_identifier) {
    segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__msg__Ticksfb__rosidl_typesupport_introspection_c__Ticksfb_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
