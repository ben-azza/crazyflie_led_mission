// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/named_pose_array_v2.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__TRAITS_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array_v2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'latencies'
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__traits.hpp"
// Member 'poses'
#include "motion_capture_tracking_interfaces/msg/detail/named_pose__traits.hpp"

namespace motion_capture_tracking_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NamedPoseArrayV2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: latencies
  {
    if (msg.latencies.size() == 0) {
      out << "latencies: []";
    } else {
      out << "latencies: [";
      size_t pending_items = msg.latencies.size();
      for (auto item : msg.latencies) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NamedPoseArrayV2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: latencies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latencies.size() == 0) {
      out << "latencies: []\n";
    } else {
      out << "latencies:\n";
      for (auto item : msg.latencies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NamedPoseArrayV2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motion_capture_tracking_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  motion_capture_tracking_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motion_capture_tracking_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 & msg)
{
  return motion_capture_tracking_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>()
{
  return "motion_capture_tracking_interfaces::msg::NamedPoseArrayV2";
}

template<>
inline const char * name<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>()
{
  return "motion_capture_tracking_interfaces/msg/NamedPoseArrayV2";
}

template<>
struct has_fixed_size<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__TRAITS_HPP_
