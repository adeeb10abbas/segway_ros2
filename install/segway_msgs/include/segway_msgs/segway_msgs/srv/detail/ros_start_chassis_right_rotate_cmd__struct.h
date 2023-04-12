// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosStartChassisRightRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosStartChassisRightRotateCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosStartChassisRightRotateCmd_Request
{
  /// angular velocity of rotation in situ, unit: rad/s
  double ros_startchassis_right_rotatecmd;
} segway_msgs__srv__RosStartChassisRightRotateCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosStartChassisRightRotateCmd_Request.
typedef struct segway_msgs__srv__RosStartChassisRightRotateCmd_Request__Sequence
{
  segway_msgs__srv__RosStartChassisRightRotateCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosStartChassisRightRotateCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosStartChassisRightRotateCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosStartChassisRightRotateCmd_Response
{
  /// 0:success; others: coutdown remaining time(10 milliseconds)
  int16_t chassis_rightrotate_result;
} segway_msgs__srv__RosStartChassisRightRotateCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosStartChassisRightRotateCmd_Response.
typedef struct segway_msgs__srv__RosStartChassisRightRotateCmd_Response__Sequence
{
  segway_msgs__srv__RosStartChassisRightRotateCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosStartChassisRightRotateCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_H_
