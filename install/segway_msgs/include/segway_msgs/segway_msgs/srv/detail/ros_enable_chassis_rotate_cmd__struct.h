// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosEnableChassisRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosEnableChassisRotateCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosEnableChassisRotateCmd_Request
{
  bool ros_enablechassis_rotate_cmd;
} segway_msgs__srv__RosEnableChassisRotateCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosEnableChassisRotateCmd_Request.
typedef struct segway_msgs__srv__RosEnableChassisRotateCmd_Request__Sequence
{
  segway_msgs__srv__RosEnableChassisRotateCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosEnableChassisRotateCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosEnableChassisRotateCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosEnableChassisRotateCmd_Response
{
  /// 0:success; others: coutdown remaining time(seconds)
  int16_t chassis_enablerotate_result;
} segway_msgs__srv__RosEnableChassisRotateCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosEnableChassisRotateCmd_Response.
typedef struct segway_msgs__srv__RosEnableChassisRotateCmd_Response__Sequence
{
  segway_msgs__srv__RosEnableChassisRotateCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosEnableChassisRotateCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_ENABLE_CHASSIS_ROTATE_CMD__STRUCT_H_
