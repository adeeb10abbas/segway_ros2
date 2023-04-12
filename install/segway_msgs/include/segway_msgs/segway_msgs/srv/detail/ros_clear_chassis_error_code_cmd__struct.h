// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosClearChassisErrorCodeCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosClearChassisErrorCodeCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosClearChassisErrorCodeCmd_Request
{
  /// //clear the error code of the chassis, excluding warnings and exceptions
  bool clear_chassiserror_code_cmd;
} segway_msgs__srv__RosClearChassisErrorCodeCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosClearChassisErrorCodeCmd_Request.
typedef struct segway_msgs__srv__RosClearChassisErrorCodeCmd_Request__Sequence
{
  segway_msgs__srv__RosClearChassisErrorCodeCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosClearChassisErrorCodeCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosClearChassisErrorCodeCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosClearChassisErrorCodeCmd_Response
{
  uint8_t clear_chassiserror_code_result;
} segway_msgs__srv__RosClearChassisErrorCodeCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosClearChassisErrorCodeCmd_Response.
typedef struct segway_msgs__srv__RosClearChassisErrorCodeCmd_Response__Sequence
{
  segway_msgs__srv__RosClearChassisErrorCodeCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosClearChassisErrorCodeCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_CLEAR_CHASSIS_ERROR_CODE_CMD__STRUCT_H_
