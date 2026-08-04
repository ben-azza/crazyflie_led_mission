// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array_v2__rosidl_typesupport_introspection_c.h"
#include "motion_capture_tracking_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array_v2__functions.h"
#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array_v2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `latencies`
#include "motion_capture_tracking_interfaces/msg/latency_info.h"
// Member `latencies`
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "motion_capture_tracking_interfaces/msg/named_pose.h"
// Member `poses`
#include "motion_capture_tracking_interfaces/msg/detail/named_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__init(message_memory);
}

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_fini_function(void * message_memory)
{
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__fini(message_memory);
}

size_t motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__size_function__NamedPoseArrayV2__latencies(
  const void * untyped_member)
{
  const motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__latencies(
  const void * untyped_member, size_t index)
{
  const motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__latencies(
  void * untyped_member, size_t index)
{
  motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence * member =
    (motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__fetch_function__NamedPoseArrayV2__latencies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motion_capture_tracking_interfaces__msg__LatencyInfo * item =
    ((const motion_capture_tracking_interfaces__msg__LatencyInfo *)
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__latencies(untyped_member, index));
  motion_capture_tracking_interfaces__msg__LatencyInfo * value =
    (motion_capture_tracking_interfaces__msg__LatencyInfo *)(untyped_value);
  *value = *item;
}

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__assign_function__NamedPoseArrayV2__latencies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motion_capture_tracking_interfaces__msg__LatencyInfo * item =
    ((motion_capture_tracking_interfaces__msg__LatencyInfo *)
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__latencies(untyped_member, index));
  const motion_capture_tracking_interfaces__msg__LatencyInfo * value =
    (const motion_capture_tracking_interfaces__msg__LatencyInfo *)(untyped_value);
  *item = *value;
}

bool motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__resize_function__NamedPoseArrayV2__latencies(
  void * untyped_member, size_t size)
{
  motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence * member =
    (motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence *)(untyped_member);
  motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__fini(member);
  return motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__init(member, size);
}

size_t motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__size_function__NamedPoseArrayV2__poses(
  const void * untyped_member)
{
  const motion_capture_tracking_interfaces__msg__NamedPose__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__NamedPose__Sequence *)(untyped_member);
  return member->size;
}

const void * motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__poses(
  const void * untyped_member, size_t index)
{
  const motion_capture_tracking_interfaces__msg__NamedPose__Sequence * member =
    (const motion_capture_tracking_interfaces__msg__NamedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__poses(
  void * untyped_member, size_t index)
{
  motion_capture_tracking_interfaces__msg__NamedPose__Sequence * member =
    (motion_capture_tracking_interfaces__msg__NamedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__fetch_function__NamedPoseArrayV2__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motion_capture_tracking_interfaces__msg__NamedPose * item =
    ((const motion_capture_tracking_interfaces__msg__NamedPose *)
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__poses(untyped_member, index));
  motion_capture_tracking_interfaces__msg__NamedPose * value =
    (motion_capture_tracking_interfaces__msg__NamedPose *)(untyped_value);
  *value = *item;
}

void motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__assign_function__NamedPoseArrayV2__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motion_capture_tracking_interfaces__msg__NamedPose * item =
    ((motion_capture_tracking_interfaces__msg__NamedPose *)
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__poses(untyped_member, index));
  const motion_capture_tracking_interfaces__msg__NamedPose * value =
    (const motion_capture_tracking_interfaces__msg__NamedPose *)(untyped_value);
  *item = *value;
}

bool motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__resize_function__NamedPoseArrayV2__poses(
  void * untyped_member, size_t size)
{
  motion_capture_tracking_interfaces__msg__NamedPose__Sequence * member =
    (motion_capture_tracking_interfaces__msg__NamedPose__Sequence *)(untyped_member);
  motion_capture_tracking_interfaces__msg__NamedPose__Sequence__fini(member);
  return motion_capture_tracking_interfaces__msg__NamedPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__NamedPoseArrayV2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__NamedPoseArrayV2, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latencies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__NamedPoseArrayV2, latencies),  // bytes offset in struct
    NULL,  // default value
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__size_function__NamedPoseArrayV2__latencies,  // size() function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__latencies,  // get_const(index) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__latencies,  // get(index) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__fetch_function__NamedPoseArrayV2__latencies,  // fetch(index, &value) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__assign_function__NamedPoseArrayV2__latencies,  // assign(index, value) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__resize_function__NamedPoseArrayV2__latencies  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_capture_tracking_interfaces__msg__NamedPoseArrayV2, poses),  // bytes offset in struct
    NULL,  // default value
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__size_function__NamedPoseArrayV2__poses,  // size() function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_const_function__NamedPoseArrayV2__poses,  // get_const(index) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__get_function__NamedPoseArrayV2__poses,  // get(index) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__fetch_function__NamedPoseArrayV2__poses,  // fetch(index, &value) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__assign_function__NamedPoseArrayV2__poses,  // assign(index, value) function pointer
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__resize_function__NamedPoseArrayV2__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_members = {
  "motion_capture_tracking_interfaces__msg",  // message namespace
  "NamedPoseArrayV2",  // message name
  4,  // number of fields
  sizeof(motion_capture_tracking_interfaces__msg__NamedPoseArrayV2),
  false,  // has_any_key_member_
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_member_array,  // message members
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_init_function,  // function to initialize message memory (memory has to be allocated)
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_type_support_handle = {
  0,
  &motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_members,
  get_message_typesupport_handle_function,
  &motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__get_type_hash,
  &motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__get_type_description,
  &motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motion_capture_tracking_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, NamedPoseArrayV2)() {
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, LatencyInfo)();
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_capture_tracking_interfaces, msg, NamedPose)();
  if (!motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_type_support_handle.typesupport_identifier) {
    motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__rosidl_typesupport_introspection_c__NamedPoseArrayV2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
