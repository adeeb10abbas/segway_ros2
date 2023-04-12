// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_Goal_board_index_for_iap
{
public:
  Init_RosSetIapCmd_Goal_board_index_for_iap()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::action::RosSetIapCmd_Goal board_index_for_iap(::segway_msgs::action::RosSetIapCmd_Goal::_board_index_for_iap_type arg)
  {
    msg_.board_index_for_iap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_Goal>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_Goal_board_index_for_iap();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_Result_error_code
{
public:
  explicit Init_RosSetIapCmd_Result_error_code(::segway_msgs::action::RosSetIapCmd_Result & msg)
  : msg_(msg)
  {}
  ::segway_msgs::action::RosSetIapCmd_Result error_code(::segway_msgs::action::RosSetIapCmd_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_Result msg_;
};

class Init_RosSetIapCmd_Result_iap_result
{
public:
  Init_RosSetIapCmd_Result_iap_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetIapCmd_Result_error_code iap_result(::segway_msgs::action::RosSetIapCmd_Result::_iap_result_type arg)
  {
    msg_.iap_result = std::move(arg);
    return Init_RosSetIapCmd_Result_error_code(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_Result>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_Result_iap_result();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_Feedback_iap_percent
{
public:
  Init_RosSetIapCmd_Feedback_iap_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::action::RosSetIapCmd_Feedback iap_percent(::segway_msgs::action::RosSetIapCmd_Feedback::_iap_percent_type arg)
  {
    msg_.iap_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_Feedback>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_Feedback_iap_percent();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_SendGoal_Request_goal
{
public:
  explicit Init_RosSetIapCmd_SendGoal_Request_goal(::segway_msgs::action::RosSetIapCmd_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Request goal(::segway_msgs::action::RosSetIapCmd_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Request msg_;
};

class Init_RosSetIapCmd_SendGoal_Request_goal_id
{
public:
  Init_RosSetIapCmd_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetIapCmd_SendGoal_Request_goal goal_id(::segway_msgs::action::RosSetIapCmd_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RosSetIapCmd_SendGoal_Request_goal(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_SendGoal_Request>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_SendGoal_Request_goal_id();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_SendGoal_Response_stamp
{
public:
  explicit Init_RosSetIapCmd_SendGoal_Response_stamp(::segway_msgs::action::RosSetIapCmd_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Response stamp(::segway_msgs::action::RosSetIapCmd_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Response msg_;
};

class Init_RosSetIapCmd_SendGoal_Response_accepted
{
public:
  Init_RosSetIapCmd_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetIapCmd_SendGoal_Response_stamp accepted(::segway_msgs::action::RosSetIapCmd_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RosSetIapCmd_SendGoal_Response_stamp(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_SendGoal_Response>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_SendGoal_Response_accepted();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_GetResult_Request_goal_id
{
public:
  Init_RosSetIapCmd_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::action::RosSetIapCmd_GetResult_Request goal_id(::segway_msgs::action::RosSetIapCmd_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_GetResult_Request>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_GetResult_Request_goal_id();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_GetResult_Response_result
{
public:
  explicit Init_RosSetIapCmd_GetResult_Response_result(::segway_msgs::action::RosSetIapCmd_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::segway_msgs::action::RosSetIapCmd_GetResult_Response result(::segway_msgs::action::RosSetIapCmd_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_GetResult_Response msg_;
};

class Init_RosSetIapCmd_GetResult_Response_status
{
public:
  Init_RosSetIapCmd_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetIapCmd_GetResult_Response_result status(::segway_msgs::action::RosSetIapCmd_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RosSetIapCmd_GetResult_Response_result(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_GetResult_Response>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_GetResult_Response_status();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace action
{

namespace builder
{

class Init_RosSetIapCmd_FeedbackMessage_feedback
{
public:
  explicit Init_RosSetIapCmd_FeedbackMessage_feedback(::segway_msgs::action::RosSetIapCmd_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::segway_msgs::action::RosSetIapCmd_FeedbackMessage feedback(::segway_msgs::action::RosSetIapCmd_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_FeedbackMessage msg_;
};

class Init_RosSetIapCmd_FeedbackMessage_goal_id
{
public:
  Init_RosSetIapCmd_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSetIapCmd_FeedbackMessage_feedback goal_id(::segway_msgs::action::RosSetIapCmd_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RosSetIapCmd_FeedbackMessage_feedback(msg_);
  }

private:
  ::segway_msgs::action::RosSetIapCmd_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::action::RosSetIapCmd_FeedbackMessage>()
{
  return segway_msgs::action::builder::Init_RosSetIapCmd_FeedbackMessage_goal_id();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__BUILDER_HPP_
