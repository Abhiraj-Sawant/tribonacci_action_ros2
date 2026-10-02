// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tribonacci_interfaces:action/Tribonacci.idl
// generated code does not contain a copyright notice

#ifndef TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_H_
#define TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_Goal
{
  bool start;
} tribonacci_interfaces__action__Tribonacci_Goal;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_Goal.
typedef struct tribonacci_interfaces__action__Tribonacci_Goal__Sequence
{
  tribonacci_interfaces__action__Tribonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_Result
{
  rosidl_runtime_c__int64__Sequence sequence;
} tribonacci_interfaces__action__Tribonacci_Result;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_Result.
typedef struct tribonacci_interfaces__action__Tribonacci_Result__Sequence
{
  tribonacci_interfaces__action__Tribonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_Feedback
{
  int32_t current_index;
  int64_t current_number;
} tribonacci_interfaces__action__Tribonacci_Feedback;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_Feedback.
typedef struct tribonacci_interfaces__action__Tribonacci_Feedback__Sequence
{
  tribonacci_interfaces__action__Tribonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tribonacci_interfaces/action/detail/tribonacci__struct.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tribonacci_interfaces__action__Tribonacci_Goal goal;
} tribonacci_interfaces__action__Tribonacci_SendGoal_Request;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_SendGoal_Request.
typedef struct tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence
{
  tribonacci_interfaces__action__Tribonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tribonacci_interfaces__action__Tribonacci_SendGoal_Response;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_SendGoal_Response.
typedef struct tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence
{
  tribonacci_interfaces__action__Tribonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tribonacci_interfaces__action__Tribonacci_GetResult_Request;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_GetResult_Request.
typedef struct tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence
{
  tribonacci_interfaces__action__Tribonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__struct.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_GetResult_Response
{
  int8_t status;
  tribonacci_interfaces__action__Tribonacci_Result result;
} tribonacci_interfaces__action__Tribonacci_GetResult_Response;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_GetResult_Response.
typedef struct tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence
{
  tribonacci_interfaces__action__Tribonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__struct.h"

/// Struct defined in action/Tribonacci in the package tribonacci_interfaces.
typedef struct tribonacci_interfaces__action__Tribonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tribonacci_interfaces__action__Tribonacci_Feedback feedback;
} tribonacci_interfaces__action__Tribonacci_FeedbackMessage;

// Struct for a sequence of tribonacci_interfaces__action__Tribonacci_FeedbackMessage.
typedef struct tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence
{
  tribonacci_interfaces__action__Tribonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__STRUCT_H_
