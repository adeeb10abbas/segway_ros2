// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetSwVersionCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetSwVersionCmd_Request
{
  bool ros_getsw_version_cmd;
} segway_msgs__srv__RosGetSwVersionCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetSwVersionCmd_Request.
typedef struct segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence
{
  segway_msgs__srv__RosGetSwVersionCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetSwVersionCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosGetSwVersionCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetSwVersionCmd_Response
{
  uint16_t host_version;
  uint16_t host_pantchversion;
  uint16_t central_version;
  uint16_t motor_version;
} segway_msgs__srv__RosGetSwVersionCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetSwVersionCmd_Response.
typedef struct segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence
{
  segway_msgs__srv__RosGetSwVersionCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetSwVersionCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_SW_VERSION_CMD__STRUCT_H_
