// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/named_pose_array_v2.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__BUILDER_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motion_capture_tracking_interfaces/msg/detail/named_pose_array_v2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motion_capture_tracking_interfaces
{

namespace msg
{

namespace builder
{

class Init_NamedPoseArrayV2_poses
{
public:
  explicit Init_NamedPoseArrayV2_poses(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 & msg)
  : msg_(msg)
  {}
  ::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 poses(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 msg_;
};

class Init_NamedPoseArrayV2_latencies
{
public:
  explicit Init_NamedPoseArrayV2_latencies(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 & msg)
  : msg_(msg)
  {}
  Init_NamedPoseArrayV2_poses latencies(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2::_latencies_type arg)
  {
    msg_.latencies = std::move(arg);
    return Init_NamedPoseArrayV2_poses(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 msg_;
};

class Init_NamedPoseArrayV2_timestamp
{
public:
  explicit Init_NamedPoseArrayV2_timestamp(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 & msg)
  : msg_(msg)
  {}
  Init_NamedPoseArrayV2_latencies timestamp(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NamedPoseArrayV2_latencies(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 msg_;
};

class Init_NamedPoseArrayV2_header
{
public:
  Init_NamedPoseArrayV2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NamedPoseArrayV2_timestamp header(::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NamedPoseArrayV2_timestamp(msg_);
  }

private:
  ::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_capture_tracking_interfaces::msg::NamedPoseArrayV2>()
{
  return motion_capture_tracking_interfaces::msg::builder::Init_NamedPoseArrayV2_header();
}

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__BUILDER_HPP_
