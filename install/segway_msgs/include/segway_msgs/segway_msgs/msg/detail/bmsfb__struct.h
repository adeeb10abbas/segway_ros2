// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Bmsfb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Bmsfb in the package segway_msgs.
typedef struct segway_msgs__msg__Bmsfb
{
  int16_t bat_soc;
  int16_t bat_charging;
  int32_t bat_vol;
  int32_t bat_current;
  int16_t bat_temp;
} segway_msgs__msg__Bmsfb;

// Struct for a sequence of segway_msgs__msg__Bmsfb.
typedef struct segway_msgs__msg__Bmsfb__Sequence
{
  segway_msgs__msg__Bmsfb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Bmsfb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__BMSFB__STRUCT_H_
