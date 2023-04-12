// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:srv/RosGetRotateFunctionCfgCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetRotateFunctionCfgCmd_Request_
{
  using Type = RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>;

  explicit RosGetRotateFunctionCfgCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RosGetRotateFunctionCfgCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Request
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetRotateFunctionCfgCmd_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetRotateFunctionCfgCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetRotateFunctionCfgCmd_Request_

// alias to use template instance with default allocator
using RosGetRotateFunctionCfgCmd_Request =
  segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosGetRotateFunctionCfgCmd_Response_
{
  using Type = RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>;

  explicit RosGetRotateFunctionCfgCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cfg_insitu_rotation_cmd = 0;
    }
  }

  explicit RosGetRotateFunctionCfgCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cfg_insitu_rotation_cmd = 0;
    }
  }

  // field types and members
  using _cfg_insitu_rotation_cmd_type =
    uint8_t;
  _cfg_insitu_rotation_cmd_type cfg_insitu_rotation_cmd;

  // setters for named parameter idiom
  Type & set__cfg_insitu_rotation_cmd(
    const uint8_t & _arg)
  {
    this->cfg_insitu_rotation_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__srv__RosGetRotateFunctionCfgCmd_Response
    std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosGetRotateFunctionCfgCmd_Response_ & other) const
  {
    if (this->cfg_insitu_rotation_cmd != other.cfg_insitu_rotation_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosGetRotateFunctionCfgCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosGetRotateFunctionCfgCmd_Response_

// alias to use template instance with default allocator
using RosGetRotateFunctionCfgCmd_Response =
  segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace segway_msgs

namespace segway_msgs
{

namespace srv
{

struct RosGetRotateFunctionCfgCmd
{
  using Request = segway_msgs::srv::RosGetRotateFunctionCfgCmd_Request;
  using Response = segway_msgs::srv::RosGetRotateFunctionCfgCmd_Response;
};

}  // namespace srv

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_ROTATE_FUNCTION_CFG_CMD__STRUCT_HPP_
