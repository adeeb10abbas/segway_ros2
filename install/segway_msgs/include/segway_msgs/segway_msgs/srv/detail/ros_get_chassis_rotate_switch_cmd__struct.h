// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosGetChassisRotateSwitchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosGetChassisRotateSwitchCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request
{
  bool ros_getchassis_rotate_cmd;
} segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request.
typedef struct segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request__Sequence
{
  segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetChassisRotateSwitchCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosGetChassisRotateSwitchCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response
{
  /// 1:can rotate in place; others: no
  uint8_t chassis_rotatestate;
} segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response.
typedef struct segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response__Sequence
{
  segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosGetChassisRotateSwitchCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__STRUCT_H_
