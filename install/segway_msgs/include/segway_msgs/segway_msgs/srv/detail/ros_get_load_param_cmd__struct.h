// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetLoadParamCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetLoadParamCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetLoadParamCmd_Request
{
  bool ros_getload_param;
} segway_msgs__srv__RosGetLoadParamCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetLoadParamCmd_Request.
typedef struct segway_msgs__srv__RosGetLoadParamCmd_Request__Sequence
{
  segway_msgs__srv__RosGetLoadParamCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetLoadParamCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosGetLoadParamCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetLoadParamCmd_Response
{
  /// 0:no_load, 1: full_load
  int16_t get_loadparam;
} segway_msgs__srv__RosGetLoadParamCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetLoadParamCmd_Response.
typedef struct segway_msgs__srv__RosGetLoadParamCmd_Response__Sequence
{
  segway_msgs__srv__RosGetLoadParamCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetLoadParamCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_LOAD_PARAM_CMD__STRUCT_H_
