// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__rosidl_typesupport_introspection_c.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.h"


// Include directives for member types
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motion_capture_tracking_interfaces__msg__LatencyInfo__init(message_memory);
}

void motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_fini_function(void * message_memory)
{
  motion_capture_tracking_interfaces__msg__LatencyInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_member_array[2] = {
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__LatencyInfo, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__LatencyInfo, latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_members = {
  "motion_capture_tracking_interfaces__msg",  // message namespace
  "LatencyInfo",  // message name
  2,  // number of fields
  sizeof(motion_capture_tracking_interfaces__msg__LatencyInfo),
  false,  // has_any_key_member_
  motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_member_array,  // message members
  motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_type_support_handle = {
  0,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_hash,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description,
  &motion_capture_tracking_interfaces__msg__LatencyInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, LatencyInfo)() {
  if (!motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_type_support_handle.typesupport_identifier) {
    motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motion_capture_tracking_interfaces__msg__LatencyInfo__rosidl_typesupport_introspection_c__LatencyInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
