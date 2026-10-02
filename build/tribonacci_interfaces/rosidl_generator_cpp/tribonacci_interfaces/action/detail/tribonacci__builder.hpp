// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tribonacci_interfaces:action/Tribonacci.idl
// generated code does not contain a copyright notice

#ifndef TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__BUILDER_HPP_
#define TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tribonacci_interfaces/action/detail/tribonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_Goal_start
{
public:
  Init_Tribonacci_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tribonacci_interfaces::action::Tribonacci_Goal start(::tribonacci_interfaces::action::Tribonacci_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_Goal>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_Goal_start();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_Result_sequence
{
public:
  Init_Tribonacci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tribonacci_interfaces::action::Tribonacci_Result sequence(::tribonacci_interfaces::action::Tribonacci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_Result>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_Result_sequence();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_Feedback_current_number
{
public:
  explicit Init_Tribonacci_Feedback_current_number(::tribonacci_interfaces::action::Tribonacci_Feedback & msg)
  : msg_(msg)
  {}
  ::tribonacci_interfaces::action::Tribonacci_Feedback current_number(::tribonacci_interfaces::action::Tribonacci_Feedback::_current_number_type arg)
  {
    msg_.current_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_Feedback msg_;
};

class Init_Tribonacci_Feedback_current_index
{
public:
  Init_Tribonacci_Feedback_current_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tribonacci_Feedback_current_number current_index(::tribonacci_interfaces::action::Tribonacci_Feedback::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return Init_Tribonacci_Feedback_current_number(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_Feedback>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_Feedback_current_index();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_SendGoal_Request_goal
{
public:
  explicit Init_Tribonacci_SendGoal_Request_goal(::tribonacci_interfaces::action::Tribonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Request goal(::tribonacci_interfaces::action::Tribonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Request msg_;
};

class Init_Tribonacci_SendGoal_Request_goal_id
{
public:
  Init_Tribonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tribonacci_SendGoal_Request_goal goal_id(::tribonacci_interfaces::action::Tribonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tribonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_SendGoal_Request>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_SendGoal_Request_goal_id();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Tribonacci_SendGoal_Response_stamp(::tribonacci_interfaces::action::Tribonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Response stamp(::tribonacci_interfaces::action::Tribonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Response msg_;
};

class Init_Tribonacci_SendGoal_Response_accepted
{
public:
  Init_Tribonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tribonacci_SendGoal_Response_stamp accepted(::tribonacci_interfaces::action::Tribonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Tribonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_SendGoal_Response>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_SendGoal_Response_accepted();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_GetResult_Request_goal_id
{
public:
  Init_Tribonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tribonacci_interfaces::action::Tribonacci_GetResult_Request goal_id(::tribonacci_interfaces::action::Tribonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_GetResult_Request>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_GetResult_Request_goal_id();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_GetResult_Response_result
{
public:
  explicit Init_Tribonacci_GetResult_Response_result(::tribonacci_interfaces::action::Tribonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tribonacci_interfaces::action::Tribonacci_GetResult_Response result(::tribonacci_interfaces::action::Tribonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_GetResult_Response msg_;
};

class Init_Tribonacci_GetResult_Response_status
{
public:
  Init_Tribonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tribonacci_GetResult_Response_result status(::tribonacci_interfaces::action::Tribonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Tribonacci_GetResult_Response_result(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_GetResult_Response>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_GetResult_Response_status();
}

}  // namespace tribonacci_interfaces


namespace tribonacci_interfaces
{

namespace action
{

namespace builder
{

class Init_Tribonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Tribonacci_FeedbackMessage_feedback(::tribonacci_interfaces::action::Tribonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tribonacci_interfaces::action::Tribonacci_FeedbackMessage feedback(::tribonacci_interfaces::action::Tribonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_FeedbackMessage msg_;
};

class Init_Tribonacci_FeedbackMessage_goal_id
{
public:
  Init_Tribonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tribonacci_FeedbackMessage_feedback goal_id(::tribonacci_interfaces::action::Tribonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tribonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::tribonacci_interfaces::action::Tribonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tribonacci_interfaces::action::Tribonacci_FeedbackMessage>()
{
  return tribonacci_interfaces::action::builder::Init_Tribonacci_FeedbackMessage_goal_id();
}

}  // namespace tribonacci_interfaces

#endif  // TRIBONACCI_INTERFACES__ACTION__DETAIL__TRIBONACCI__BUILDER_HPP_
