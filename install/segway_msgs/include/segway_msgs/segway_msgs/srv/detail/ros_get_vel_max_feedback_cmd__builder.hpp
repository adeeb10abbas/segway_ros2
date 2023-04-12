// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetVelMaxFeedbackCmd_Request_ros_getvel_max_fbcmd
{
public:
  Init_RosGetVelMaxFeedbackCmd_Request_ros_getvel_max_fbcmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request ros_getvel_max_fbcmd(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request::_ros_getvel_max_fbcmd_type arg)
  {
    msg_.ros_getvel_max_fbcmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetVelMaxFeedbackCmd_Request_ros_getvel_max_fbcmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetVelMaxFeedbackCmd_Response_angular_maxvel_fb
{
public:
  explicit Init_RosGetVelMaxFeedbackCmd_Response_angular_maxvel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & msg)
  : msg_(msg)
  {}
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response angular_maxvel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_angular_maxvel_fb_type arg)
  {
    msg_.angular_maxvel_fb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

class Init_RosGetVelMaxFeedbackCmd_Response_backward_maxvel_fb
{
public:
  explicit Init_RosGetVelMaxFeedbackCmd_Response_backward_maxvel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & msg)
  : msg_(msg)
  {}
  Init_RosGetVelMaxFeedbackCmd_Response_angular_maxvel_fb backward_maxvel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_backward_maxvel_fb_type arg)
  {
    msg_.backward_maxvel_fb = std::move(arg);
    return Init_RosGetVelMaxFeedbackCmd_Response_angular_maxvel_fb(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

class Init_RosGetVelMaxFeedbackCmd_Response_forward_maxvel_fb
{
public:
  Init_RosGetVelMaxFeedbackCmd_Response_forward_maxvel_fb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosGetVelMaxFeedbackCmd_Response_backward_maxvel_fb forward_maxvel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_forward_maxvel_fb_type arg)
  {
    msg_.forward_maxvel_fb = std::move(arg);
    return Init_RosGetVelMaxFeedbackCmd_Response_backward_maxvel_fb(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetVelMaxFeedbackCmd_Response_forward_maxvel_fb();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_
