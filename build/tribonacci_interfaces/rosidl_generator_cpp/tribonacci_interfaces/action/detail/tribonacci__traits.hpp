// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tribonacci_interfaces:action/Tribonacci.idl
// generated code does not contain a copyright notice

#ifndef TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__TRAITS_HPP_
#define TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tribonacci_interfaces/action/detail/tribonacci__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_Goal & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_Goal>()
{
  return "tribonacci_interfaces::action::Tribonacci_Goal";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_Goal>()
{
  return "tribonacci_interfaces/action/Tribonacci_Goal";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence
  {
    if (msg.sequence.size() == 0) {
      out << "sequence: []";
    } else {
      out << "sequence: [";
      size_t pending_items = msg.sequence.size();
      for (auto item : msg.sequence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence.size() == 0) {
      out << "sequence: []\n";
    } else {
      out << "sequence:\n";
      for (auto item : msg.sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_Result & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_Result>()
{
  return "tribonacci_interfaces::action::Tribonacci_Result";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_Result>()
{
  return "tribonacci_interfaces/action/Tribonacci_Result";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_index
  {
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << ", ";
  }

  // member: current_number
  {
    out << "current_number: ";
    rosidl_generator_traits::value_to_yaml(msg.current_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << "\n";
  }

  // member: current_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_number: ";
    rosidl_generator_traits::value_to_yaml(msg.current_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_Feedback & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_Feedback>()
{
  return "tribonacci_interfaces::action::Tribonacci_Feedback";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_Feedback>()
{
  return "tribonacci_interfaces/action/Tribonacci_Feedback";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tribonacci_interfaces/action/detail/tribonacci__traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_SendGoal_Request & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>()
{
  return "tribonacci_interfaces::action::Tribonacci_SendGoal_Request";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>()
{
  return "tribonacci_interfaces/action/Tribonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tribonacci_interfaces::action::Tribonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tribonacci_interfaces::action::Tribonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_SendGoal_Response & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>()
{
  return "tribonacci_interfaces::action::Tribonacci_SendGoal_Response";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>()
{
  return "tribonacci_interfaces/action/Tribonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_SendGoal>()
{
  return "tribonacci_interfaces::action::Tribonacci_SendGoal";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_SendGoal>()
{
  return "tribonacci_interfaces/action/Tribonacci_SendGoal";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>::value &&
    has_fixed_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>::value &&
    has_bounded_size<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tribonacci_interfaces::action::Tribonacci_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tribonacci_interfaces::action::Tribonacci_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tribonacci_interfaces::action::Tribonacci_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_GetResult_Request & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_GetResult_Request>()
{
  return "tribonacci_interfaces::action::Tribonacci_GetResult_Request";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_GetResult_Request>()
{
  return "tribonacci_interfaces/action/Tribonacci_GetResult_Request";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_GetResult_Response & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_GetResult_Response>()
{
  return "tribonacci_interfaces::action::Tribonacci_GetResult_Response";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_GetResult_Response>()
{
  return "tribonacci_interfaces/action/Tribonacci_GetResult_Response";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tribonacci_interfaces::action::Tribonacci_Result>::value> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tribonacci_interfaces::action::Tribonacci_Result>::value> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_GetResult>()
{
  return "tribonacci_interfaces::action::Tribonacci_GetResult";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_GetResult>()
{
  return "tribonacci_interfaces/action/Tribonacci_GetResult";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tribonacci_interfaces::action::Tribonacci_GetResult_Request>::value &&
    has_fixed_size<tribonacci_interfaces::action::Tribonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tribonacci_interfaces::action::Tribonacci_GetResult_Request>::value &&
    has_bounded_size<tribonacci_interfaces::action::Tribonacci_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tribonacci_interfaces::action::Tribonacci_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tribonacci_interfaces::action::Tribonacci_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tribonacci_interfaces::action::Tribonacci_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tribonacci_interfaces/action/detail/tribonacci__traits.hpp"

namespace tribonacci_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Tribonacci_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tribonacci_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tribonacci_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tribonacci_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tribonacci_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tribonacci_interfaces::action::Tribonacci_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tribonacci_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tribonacci_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tribonacci_interfaces::action::Tribonacci_FeedbackMessage & msg)
{
  return tribonacci_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tribonacci_interfaces::action::Tribonacci_FeedbackMessage>()
{
  return "tribonacci_interfaces::action::Tribonacci_FeedbackMessage";
}

template<>
inline const char * name<tribonacci_interfaces::action::Tribonacci_FeedbackMessage>()
{
  return "tribonacci_interfaces/action/Tribonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<tribonacci_interfaces::action::Tribonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tribonacci_interfaces::action::Tribonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tribonacci_interfaces::action::Tribonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tribonacci_interfaces::action::Tribonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tribonacci_interfaces::action::Tribonacci_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tribonacci_interfaces::action::Tribonacci>
  : std::true_type
{
};

template<>
struct is_action_goal<tribonacci_interfaces::action::Tribonacci_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tribonacci_interfaces::action::Tribonacci_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tribonacci_interfaces::action::Tribonacci_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__TRAITS_HPP_
