// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/named_pose_array_v2.h"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_H_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'latencies'
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.h"
// Member 'poses'
#include "motion_capture_tracking_interfaces/msg/detail/named_pose__struct.h"

/// Struct defined in msg/NamedPoseArrayV2 in the package motion_capture_tracking_interfaces.
typedef struct motion_capture_tracking_interfaces__msg__NamedPoseArrayV2
{
  /// depending on the setting, the timestamp might be in ROS time when the information arrived or in camera time
  std_msgs__msg__Header header;
  /// vendor specific, in microseconds
  uint64_t timestamp;
  motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence latencies;
  motion_capture_tracking_interfaces__msg__NamedPose__Sequence poses;
} motion_capture_tracking_interfaces__msg__NamedPoseArrayV2;

// Struct for a sequence of motion_capture_tracking_interfaces__msg__NamedPoseArrayV2.
typedef struct motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence
{
  motion_capture_tracking_interfaces__msg__NamedPoseArrayV2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_H_
