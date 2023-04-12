// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Speedfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Speedfb in the package segway_msgs.
typedef struct segway_msgs__msg__Speedfb
{
  float car_speed;
  float turn_speed;
  float fl_speed;
  float fr_speed;
  float rl_speed;
  float rr_speed;
  uint64_t speed_timestamp;
} segway_msgs__msg__Speedfb;

// Struct for a sequence of segway_msgs__msg__Speedfb.
typedef struct segway_msgs__msg__Speedfb__Sequence
{
  segway_msgs__msg__Speedfb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Speedfb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__SPEEDFB__STRUCT_H_
