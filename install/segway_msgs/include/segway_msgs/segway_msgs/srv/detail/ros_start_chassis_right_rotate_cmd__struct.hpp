// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosStartChassisRightRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosStartChassisRightRotateCmd_Request_
{
  using Type = RosStartChassisRightRotateCmd_Request_<ContainerAllocator>;

  explicit RosStartChassisRightRotateCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_startchassis_right_rotatecmd = 0.0;
    }
  }

  explicit RosStartChassisRightRotateCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_startchassis_right_rotatecmd = 0.0;
    }
  }

  // field types and members
  using _ros_startchassis_right_rotatecmd_type =
    double;
  _ros_startchassis_right_rotatecmd_type ros_startchassis_right_rotatecmd;

  // setters for named parameter idiom
  Type & set__ros_startchassis_right_rotatecmd(
    const double & _arg)
  {
    this->ros_startchassis_right_rotatecmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Request
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Request
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosStartChassisRightRotateCmd_Request_ & other) const
  {
    if (this->ros_startchassis_right_rotatecmd != other.ros_startchassis_right_rotatecmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosStartChassisRightRotateCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosStartChassisRightRotateCmd_Request_

// alias to use template instance with default allocator
using RosStartChassisRightRotateCmd_Request =
  segway_msgs::srv::RosStartChassisRightRotateCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosStartChassisRightRotateCmd_Response_
{
  using Type = RosStartChassisRightRotateCmd_Response_<ContainerAllocator>;

  explicit RosStartChassisRightRotateCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_rightrotate_result = 0;
    }
  }

  explicit RosStartChassisRightRotateCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_rightrotate_result = 0;
    }
  }

  // field types and members
  using _chassis_rightrotate_result_type =
    int16_t;
  _chassis_rightrotate_result_type chassis_rightrotate_result;

  // setters for named parameter idiom
  Type & set__chassis_rightrotate_result(
    const int16_t & _arg)
  {
    this->chassis_rightrotate_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Response
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosStartChassisRightRotateCmd_Response
    std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosStartChassisRightRotateCmd_Response_ & other) const
  {
    if (this->chassis_rightrotate_result != other.chassis_rightrotate_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosStartChassisRightRotateCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosStartChassisRightRotateCmd_Response_

// alias to use template instance with default allocator
using RosStartChassisRightRotateCmd_Response =
  segway_msgs::srv::RosStartChassisRightRotateCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosStartChassisRightRotateCmd
{
  using Request = segway_msgs::srv::RosStartChassisRightRotateCmd_Request;
  using Response = segway_msgs::srv::RosStartChassisRightRotateCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_RIGHT_ROTATE_CMD__STRUCT_HPP_
