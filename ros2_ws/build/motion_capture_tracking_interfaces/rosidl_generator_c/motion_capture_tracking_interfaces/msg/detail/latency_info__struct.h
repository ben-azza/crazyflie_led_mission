// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_capture_tracking_interfaces:msg/LatencyInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/latency_info.h"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_H_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LatencyInfo in the package motion_capture_tracking_interfaces.
typedef struct motion_capture_tracking_interfaces__msg__LatencyInfo
{
  rosidl_runtime_c__String source;
  /// estimated, in microseconds
  uint32_t latency;
} motion_capture_tracking_interfaces__msg__LatencyInfo;

// Struct for a sequence of motion_capture_tracking_interfaces__msg__LatencyInfo.
typedef struct motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence
{
  motion_capture_tracking_interfaces__msg__LatencyInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__LATENCY_INFO__STRUCT_H_
