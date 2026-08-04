// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_capture_tracking_interfaces/msg/named_pose_array_v2.hpp"


#ifndef MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_HPP_
#define MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'latencies'
#include "motion_capture_tracking_interfaces/msg/detail/latency_info__struct.hpp"
// Member 'poses'
#include "motion_capture_tracking_interfaces/msg/detail/named_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2 __attribute__((deprecated))
#else
# define DEPRECATED__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2 __declspec(deprecated)
#endif

namespace motion_capture_tracking_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NamedPoseArrayV2_
{
  using Type = NamedPoseArrayV2_<ContainerAllocator>;

  explicit NamedPoseArrayV2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  explicit NamedPoseArrayV2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _latencies_type =
    std::vector<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>>;
  _latencies_type latencies;
  using _poses_type =
    std::vector<motion_capture_tracking_interfaces::msg::NamedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::NamedPose_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__latencies(
    const std::vector<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::LatencyInfo_<ContainerAllocator>>> & _arg)
  {
    this->latencies = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<motion_capture_tracking_interfaces::msg::NamedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motion_capture_tracking_interfaces::msg::NamedPose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2
    std::shared_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2
    std::shared_ptr<motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NamedPoseArrayV2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->latencies != other.latencies) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const NamedPoseArrayV2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NamedPoseArrayV2_

// alias to use template instance with default allocator
using NamedPoseArrayV2 =
  motion_capture_tracking_interfaces::msg::NamedPoseArrayV2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_capture_tracking_interfaces

#endif  // MOTION_CAPTURE_TRACKING_INTERFACES__MSG__DETAIL__NAMED_POSE_ARRAY_V2__STRUCT_HPP_
