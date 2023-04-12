// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetChassisSnCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetChassisSnCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetChassisSnCmd_Request
{
  bool ros_getchassis_sn;
} segway_msgs__srv__RosGetChassisSnCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetChassisSnCmd_Request.
typedef struct segway_msgs__srv__RosGetChassisSnCmd_Request__Sequence
{
  segway_msgs__srv__RosGetChassisSnCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetChassisSnCmd_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'chassis_sn'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RosGetChassisSnCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetChassisSnCmd_Response
{
  rosidl_runtime_c__String chassis_sn;
} segway_msgs__srv__RosGetChassisSnCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetChassisSnCmd_Response.
typedef struct segway_msgs__srv__RosGetChassisSnCmd_Response__Sequence
{
  segway_msgs__srv__RosGetChassisSnCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetChassisSnCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_SN_CMD__STRUCT_H_
