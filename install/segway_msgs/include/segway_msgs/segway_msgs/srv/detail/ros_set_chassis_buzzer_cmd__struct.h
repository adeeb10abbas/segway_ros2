// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:srv/RosSetChassisBuzzerCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__STRUCT_H_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosSetChassisBuzzerCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetChassisBuzzerCmd_Request
{
  /// 1: buzzer work; 0: buzzer not work;
  uint8_t ros_setchassis_buzzer_cmd;
} segway_msgs__srv__RosSetChassisBuzzerCmd_Request;

// Struct for a sequence of segway_msgs__srv__RosSetChassisBuzzerCmd_Request.
typedef struct segway_msgs__srv__RosSetChassisBuzzerCmd_Request__Sequence
{
  segway_msgs__srv__RosSetChassisBuzzerCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetChassisBuzzerCmd_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RosSetChassisBuzzerCmd in the package segway_msgs.
typedef struct segway_msgs__srv__RosSetChassisBuzzerCmd_Response
{
  uint8_t set_buzzerresult;
} segway_msgs__srv__RosSetChassisBuzzerCmd_Response;

// Struct for a sequence of segway_msgs__srv__RosSetChassisBuzzerCmd_Response.
typedef struct segway_msgs__srv__RosSetChassisBuzzerCmd_Response__Sequence
{
  segway_msgs__srv__RosSetChassisBuzzerCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__srv__RosSetChassisBuzzerCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_CHASSIS_BUZZER_CMD__STRUCT_H_
