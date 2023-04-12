// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_H_
#define SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_Goal
{
  /// 1:iap central board;  2: for front motor board; 3: for rear motor board; 4: for brake sticking board
  uint16_t board_index_for_iap;
} segway_msgs__action__RosSetIapCmd_Goal;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_Goal.
typedef struct segway_msgs__action__RosSetIapCmd_Goal__Sequence
{
  segway_msgs__action__RosSetIapCmd_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_Result
{
  /// 3: iap_state_complete; 4: iap_state_fail; 5: iap_state_abort
  int16_t iap_result;
  /// When iap_result value is 4, this value represents the error code
  int16_t error_code;
} segway_msgs__action__RosSetIapCmd_Result;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_Result.
typedef struct segway_msgs__action__RosSetIapCmd_Result__Sequence
{
  segway_msgs__action__RosSetIapCmd_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_Feedback
{
  int16_t iap_percent;
} segway_msgs__action__RosSetIapCmd_Feedback;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_Feedback.
typedef struct segway_msgs__action__RosSetIapCmd_Feedback__Sequence
{
  segway_msgs__action__RosSetIapCmd_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "segway_msgs/action/detail/ros_set_iap_cmd__struct.h"

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  segway_msgs__action__RosSetIapCmd_Goal goal;
} segway_msgs__action__RosSetIapCmd_SendGoal_Request;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_SendGoal_Request.
typedef struct segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence
{
  segway_msgs__action__RosSetIapCmd_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} segway_msgs__action__RosSetIapCmd_SendGoal_Response;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_SendGoal_Response.
typedef struct segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence
{
  segway_msgs__action__RosSetIapCmd_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} segway_msgs__action__RosSetIapCmd_GetResult_Request;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_GetResult_Request.
typedef struct segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence
{
  segway_msgs__action__RosSetIapCmd_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.h"

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_GetResult_Response
{
  int8_t status;
  segway_msgs__action__RosSetIapCmd_Result result;
} segway_msgs__action__RosSetIapCmd_GetResult_Response;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_GetResult_Response.
typedef struct segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence
{
  segway_msgs__action__RosSetIapCmd_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.h"

/// Struct defined in action/RosSetIapCmd in the package segway_msgs.
typedef struct segway_msgs__action__RosSetIapCmd_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  segway_msgs__action__RosSetIapCmd_Feedback feedback;
} segway_msgs__action__RosSetIapCmd_FeedbackMessage;

// Struct for a sequence of segway_msgs__action__RosSetIapCmd_FeedbackMessage.
typedef struct segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence
{
  segway_msgs__action__RosSetIapCmd_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__action__RosSetIapCmd_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_H_
