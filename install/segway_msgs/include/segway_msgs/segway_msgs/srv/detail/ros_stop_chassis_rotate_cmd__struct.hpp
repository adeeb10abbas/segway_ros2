// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosStopChassisRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosStopChassisRotateCmd_Request_
{
  using Type = RosStopChassisRotateCmd_Request_<ContainerAllocator>;

  explicit RosStopChassisRotateCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_stopchassis_rotate_cmd = false;
    }
  }

  explicit RosStopChassisRotateCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_stopchassis_rotate_cmd = false;
    }
  }

  // field types and members
  using _ros_stopchassis_rotate_cmd_type =
    bool;
  _ros_stopchassis_rotate_cmd_type ros_stopchassis_rotate_cmd;

  // setters for named parameter idiom
  Type & set__ros_stopchassis_rotate_cmd(
    const bool & _arg)
  {
    this->ros_stopchassis_rotate_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Request
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Request
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosStopChassisRotateCmd_Request_ & other) const
  {
    if (this->ros_stopchassis_rotate_cmd != other.ros_stopchassis_rotate_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosStopChassisRotateCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosStopChassisRotateCmd_Request_

// alias to use template instance with default allocator
using RosStopChassisRotateCmd_Request =
  segway_msgs::srv::RosStopChassisRotateCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosStopChassisRotateCmd_Response_
{
  using Type = RosStopChassisRotateCmd_Response_<ContainerAllocator>;

  explicit RosStopChassisRotateCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RosStopChassisRotateCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Response
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosStopChassisRotateCmd_Response
    std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosStopChassisRotateCmd_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosStopChassisRotateCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosStopChassisRotateCmd_Response_

// alias to use template instance with default allocator
using RosStopChassisRotateCmd_Response =
  segway_msgs::srv::RosStopChassisRotateCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosStopChassisRotateCmd
{
  using Request = segway_msgs::srv::RosStopChassisRotateCmd_Request;
  using Response = segway_msgs::srv::RosStopChassisRotateCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_STOP_CHASSIS_ROTATE_CMD__STRUCT_HPP_
