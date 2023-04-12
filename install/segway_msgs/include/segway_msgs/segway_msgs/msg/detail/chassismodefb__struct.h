// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Chassismodefb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Chassismodefb in the package segway_msgs.
typedef struct segway_msgs__msg__Chassismodefb
{
  uint16_t chassis_mode;
} segway_msgs__msg__Chassismodefb;

// Struct for a sequence of segway_msgs__msg__Chassismodefb.
typedef struct segway_msgs__msg__Chassismodefb__Sequence
{
  segway_msgs__msg__Chassismodefb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Chassismodefb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSISMODEFB__STRUCT_H_
