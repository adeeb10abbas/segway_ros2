// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosSetCfgRotateFunctionCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosSetCfgRotateFunctionCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request
{
  bool cfg_insitu_rotation_function;
} segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request.
typedef struct segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence
{
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosSetCfgRotateFunctionCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response
{
  uint8_t cfg_insitu_rotation_result;
} segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response.
typedef struct segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence
{
  segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CFG_ROTATE_FUNCTION_CMD__STRUCT_H_
