// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosSetVelMaxCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosSetVelMaxCmd_Request_
{
  using Type = RosSetVelMaxCmd_Request_<ContainerAllocator>;

  explicit RosSetVelMaxCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_setforward_max_vel = 0.0;
      this->ros_setbackward_max_vel = 0.0;
      this->ros_setangular_max_vel = 0.0;
    }
  }

  explicit RosSetVelMaxCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_setforward_max_vel = 0.0;
      this->ros_setbackward_max_vel = 0.0;
      this->ros_setangular_max_vel = 0.0;
    }
  }

  // field types and members
  using _ros_setforward_max_vel_type =
    double;
  _ros_setforward_max_vel_type ros_setforward_max_vel;
  using _ros_setbackward_max_vel_type =
    double;
  _ros_setbackward_max_vel_type ros_setbackward_max_vel;
  using _ros_setangular_max_vel_type =
    double;
  _ros_setangular_max_vel_type ros_setangular_max_vel;

  // setters for named parameter idiom
  Type & set__ros_setforward_max_vel(
    const double & _arg)
  {
    this->ros_setforward_max_vel = _arg;
    return *this;
  }
  Type & set__ros_setbackward_max_vel(
    const double & _arg)
  {
    this->ros_setbackward_max_vel = _arg;
    return *this;
  }
  Type & set__ros_setangular_max_vel(
    const double & _arg)
  {
    this->ros_setangular_max_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Request
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Request
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetVelMaxCmd_Request_ & other) const
  {
    if (this->ros_setforward_max_vel != other.ros_setforward_max_vel) {
      return false;
    }
    if (this->ros_setbackward_max_vel != other.ros_setbackward_max_vel) {
      return false;
    }
    if (this->ros_setangular_max_vel != other.ros_setangular_max_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetVelMaxCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetVelMaxCmd_Request_

// alias to use template instance with default allocator
using RosSetVelMaxCmd_Request =
  segway_msgs::srv::RosSetVelMaxCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosSetVelMaxCmd_Response_
{
  using Type = RosSetVelMaxCmd_Response_<ContainerAllocator>;

  explicit RosSetVelMaxCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_setmax_vel_result = 0;
    }
  }

  explicit RosSetVelMaxCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_setmax_vel_result = 0;
    }
  }

  // field types and members
  using _chassis_setmax_vel_result_type =
    uint8_t;
  _chassis_setmax_vel_result_type chassis_setmax_vel_result;

  // setters for named parameter idiom
  Type & set__chassis_setmax_vel_result(
    const uint8_t & _arg)
  {
    this->chassis_setmax_vel_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Response
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosSetVelMaxCmd_Response
    std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetVelMaxCmd_Response_ & other) const
  {
    if (this->chassis_setmax_vel_result != other.chassis_setmax_vel_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetVelMaxCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetVelMaxCmd_Response_

// alias to use template instance with default allocator
using RosSetVelMaxCmd_Response =
  segway_msgs::srv::RosSetVelMaxCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosSetVelMaxCmd
{
  using Request = segway_msgs::srv::RosSetVelMaxCmd_Request;
  using Response = segway_msgs::srv::RosSetVelMaxCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_SET_VEL_MAX_CMD__STRUCT_HPP_
