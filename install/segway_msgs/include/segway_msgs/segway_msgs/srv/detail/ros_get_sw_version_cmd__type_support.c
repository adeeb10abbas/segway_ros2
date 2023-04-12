// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__functions.h"
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__srv__RosGetSwVersionCmd_Request__init(message_memory);
}

void segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_fini_function(void * message_memory)
{
  segway_msgs__srv__RosGetSwVersionCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_member_array[1] = {
  {
    "ros_getsw_version_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__srv__RosGetSwVersionCmd_Request, ros_getsw_version_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_members = {
  "segway_msgs__srv",  // message namespace
  "RosGetSwVersionCmd_Request",  // message name
  1,  // number of fields
  sizeof(segway_msgs__srv__RosGetSwVersionCmd_Request),
  segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_member_array,  // message members
  segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_type_support_handle = {
  0,
  &segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Request)() {
  if (!segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_type_support_handle.typesupport_identifier) {
    segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__srv__RosGetSwVersionCmd_Request__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__functions.h"
// already included above
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__srv__RosGetSwVersionCmd_Response__init(message_memory);
}

void segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_fini_function(void * message_memory)
{
  segway_msgs__srv__RosGetSwVersionCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_member_array[4] = {
  {
    "host_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__srv__RosGetSwVersionCmd_Response, host_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "host_pantchversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__srv__RosGetSwVersionCmd_Response, host_pantchversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "central_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__srv__RosGetSwVersionCmd_Response, central_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__srv__RosGetSwVersionCmd_Response, motor_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_members = {
  "segway_msgs__srv",  // message namespace
  "RosGetSwVersionCmd_Response",  // message name
  4,  // number of fields
  sizeof(segway_msgs__srv__RosGetSwVersionCmd_Response),
  segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_member_array,  // message members
  segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_type_support_handle = {
  0,
  &segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Response)() {
  if (!segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_type_support_handle.typesupport_identifier) {
    segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__srv__RosGetSwVersionCmd_Response__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_members = {
  "segway_msgs__srv",  // service namespace
  "RosGetSwVersionCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Request_message_type_support_handle,
  NULL  // response message
  // segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_type_support_handle = {
  0,
  &segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd)() {
  if (!segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_type_support_handle.typesupport_identifier) {
    segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, srv, RosGetSwVersionCmd_Response)()->data;
  }

  return &segway_msgs__srv__detail__ros_get_sw_version_cmd__rosidl_typesupport_introspection_c__RosGetSwVersionCmd_service_type_support_handle;
}
