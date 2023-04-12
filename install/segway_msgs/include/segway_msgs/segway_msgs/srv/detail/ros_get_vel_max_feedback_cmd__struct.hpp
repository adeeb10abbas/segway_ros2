// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetVelMaxFeedbackCmd_Request_
{
  using Type = RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>;

  explicit RosGetVelMaxFeedbackCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getvel_max_fbcmd = false;
    }
  }

  explicit RosGetVelMaxFeedbackCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_getvel_max_fbcmd = false;
    }
  }

  // field types and members
  using _ros_getvel_max_fbcmd_type =
    bool;
  _ros_getvel_max_fbcmd_type ros_getvel_max_fbcmd;

  // setters for named parameter idiom
  Type & set__ros_getvel_max_fbcmd(
    const bool & _arg)
  {
    this->ros_getvel_max_fbcmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetVelMaxFeedbackCmd_Request_ & other) const
  {
    if (this->ros_getvel_max_fbcmd != other.ros_getvel_max_fbcmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetVelMaxFeedbackCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetVelMaxFeedbackCmd_Request_

// alias to use template instance with default allocator
using RosGetVelMaxFeedbackCmd_Request =
  segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetVelMaxFeedbackCmd_Response_
{
  using Type = RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>;

  explicit RosGetVelMaxFeedbackCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_maxvel_fb = 0;
      this->backward_maxvel_fb = 0;
      this->angular_maxvel_fb = 0;
    }
  }

  explicit RosGetVelMaxFeedbackCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->forward_maxvel_fb = 0;
      this->backward_maxvel_fb = 0;
      this->angular_maxvel_fb = 0;
    }
  }

  // field types and members
  using _forward_maxvel_fb_type =
    uint16_t;
  _forward_maxvel_fb_type forward_maxvel_fb;
  using _backward_maxvel_fb_type =
    uint16_t;
  _backward_maxvel_fb_type backward_maxvel_fb;
  using _angular_maxvel_fb_type =
    uint16_t;
  _angular_maxvel_fb_type angular_maxvel_fb;

  // setters for named parameter idiom
  Type & set__forward_maxvel_fb(
    const uint16_t & _arg)
  {
    this->forward_maxvel_fb = _arg;
    return *this;
  }
  Type & set__backward_maxvel_fb(
    const uint16_t & _arg)
  {
    this->backward_maxvel_fb = _arg;
    return *this;
  }
  Type & set__angular_maxvel_fb(
    const uint16_t & _arg)
  {
    this->angular_maxvel_fb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetVelMaxFeedbackCmd_Response_ & other) const
  {
    if (this->forward_maxvel_fb != other.forward_maxvel_fb) {
      return false;
    }
    if (this->backward_maxvel_fb != other.backward_maxvel_fb) {
      return false;
    }
    if (this->angular_maxvel_fb != other.angular_maxvel_fb) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetVelMaxFeedbackCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetVelMaxFeedbackCmd_Response_

// alias to use template instance with default allocator
using RosGetVelMaxFeedbackCmd_Response =
  segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosGetVelMaxFeedbackCmd
{
  using Request = segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request;
  using Response = segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__STRUCT_HPP_
