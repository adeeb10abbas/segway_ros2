// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Goal __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Goal __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_Goal_
{
  using Type = RosSetIapCmd_Goal_<ContainerAllocator>;

  explicit RosSetIapCmd_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board_index_for_iap = 0;
    }
  }

  explicit RosSetIapCmd_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board_index_for_iap = 0;
    }
  }

  // field types and members
  using _board_index_for_iap_type =
    uint16_t;
  _board_index_for_iap_type board_index_for_iap;

  // setters for named parameter idiom
  Type & set__board_index_for_iap(
    const uint16_t & _arg)
  {
    this->board_index_for_iap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Goal
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Goal
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_Goal_ & other) const
  {
    if (this->board_index_for_iap != other.board_index_for_iap) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_Goal_

// alias to use template instance with default allocator
using RosSetIapCmd_Goal =
  segway_msgs::action::RosSetIapCmd_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Result __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Result __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_Result_
{
  using Type = RosSetIapCmd_Result_<ContainerAllocator>;

  explicit RosSetIapCmd_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iap_result = 0;
      this->error_code = 0;
    }
  }

  explicit RosSetIapCmd_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iap_result = 0;
      this->error_code = 0;
    }
  }

  // field types and members
  using _iap_result_type =
    int16_t;
  _iap_result_type iap_result;
  using _error_code_type =
    int16_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__iap_result(
    const int16_t & _arg)
  {
    this->iap_result = _arg;
    return *this;
  }
  Type & set__error_code(
    const int16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Result
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Result
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_Result_ & other) const
  {
    if (this->iap_result != other.iap_result) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_Result_

// alias to use template instance with default allocator
using RosSetIapCmd_Result =
  segway_msgs::action::RosSetIapCmd_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs


#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_Feedback __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_Feedback_
{
  using Type = RosSetIapCmd_Feedback_<ContainerAllocator>;

  explicit RosSetIapCmd_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iap_percent = 0;
    }
  }

  explicit RosSetIapCmd_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iap_percent = 0;
    }
  }

  // field types and members
  using _iap_percent_type =
    int16_t;
  _iap_percent_type iap_percent;

  // setters for named parameter idiom
  Type & set__iap_percent(
    const int16_t & _arg)
  {
    this->iap_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Feedback
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_Feedback
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_Feedback_ & other) const
  {
    if (this->iap_percent != other.iap_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_Feedback_

// alias to use template instance with default allocator
using RosSetIapCmd_Feedback =
  segway_msgs::action::RosSetIapCmd_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_SendGoal_Request_
{
  using Type = RosSetIapCmd_SendGoal_Request_<ContainerAllocator>;

  explicit RosSetIapCmd_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RosSetIapCmd_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const segway_msgs::action::RosSetIapCmd_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Request
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Request
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_SendGoal_Request_

// alias to use template instance with default allocator
using RosSetIapCmd_SendGoal_Request =
  segway_msgs::action::RosSetIapCmd_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_SendGoal_Response_
{
  using Type = RosSetIapCmd_SendGoal_Response_<ContainerAllocator>;

  explicit RosSetIapCmd_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RosSetIapCmd_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Response
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_SendGoal_Response
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_SendGoal_Response_

// alias to use template instance with default allocator
using RosSetIapCmd_SendGoal_Response =
  segway_msgs::action::RosSetIapCmd_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs

namespace segway_msgs
{

namespace action
{

struct RosSetIapCmd_SendGoal
{
  using Request = segway_msgs::action::RosSetIapCmd_SendGoal_Request;
  using Response = segway_msgs::action::RosSetIapCmd_SendGoal_Response;
};

}  // namespace action

}  // namespace segway_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Request __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_GetResult_Request_
{
  using Type = RosSetIapCmd_GetResult_Request_<ContainerAllocator>;

  explicit RosSetIapCmd_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RosSetIapCmd_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Request
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Request
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_GetResult_Request_

// alias to use template instance with default allocator
using RosSetIapCmd_GetResult_Request =
  segway_msgs::action::RosSetIapCmd_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Response __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_GetResult_Response_
{
  using Type = RosSetIapCmd_GetResult_Response_<ContainerAllocator>;

  explicit RosSetIapCmd_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RosSetIapCmd_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const segway_msgs::action::RosSetIapCmd_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Response
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_GetResult_Response
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_GetResult_Response_

// alias to use template instance with default allocator
using RosSetIapCmd_GetResult_Response =
  segway_msgs::action::RosSetIapCmd_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs

namespace segway_msgs
{

namespace action
{

struct RosSetIapCmd_GetResult
{
  using Request = segway_msgs::action::RosSetIapCmd_GetResult_Request;
  using Response = segway_msgs::action::RosSetIapCmd_GetResult_Response;
};

}  // namespace action

}  // namespace segway_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__action__RosSetIapCmd_FeedbackMessage __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RosSetIapCmd_FeedbackMessage_
{
  using Type = RosSetIapCmd_FeedbackMessage_<ContainerAllocator>;

  explicit RosSetIapCmd_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RosSetIapCmd_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const segway_msgs::action::RosSetIapCmd_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_FeedbackMessage
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__action__RosSetIapCmd_FeedbackMessage
    std::shared_ptr<segway_msgs::action::RosSetIapCmd_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosSetIapCmd_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosSetIapCmd_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosSetIapCmd_FeedbackMessage_

// alias to use template instance with default allocator
using RosSetIapCmd_FeedbackMessage =
  segway_msgs::action::RosSetIapCmd_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace segway_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace segway_msgs
{

namespace action
{

struct RosSetIapCmd
{
  /// The goal message defined in the action definition.
  using Goal = segway_msgs::action::RosSetIapCmd_Goal;
  /// The result message defined in the action definition.
  using Result = segway_msgs::action::RosSetIapCmd_Result;
  /// The feedback message defined in the action definition.
  using Feedback = segway_msgs::action::RosSetIapCmd_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = segway_msgs::action::RosSetIapCmd_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = segway_msgs::action::RosSetIapCmd_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = segway_msgs::action::RosSetIapCmd_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RosSetIapCmd RosSetIapCmd;

}  // namespace action

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__ACTION__DETAIL__ROS_SET_IAP_CMD__STRUCT_HPP_
