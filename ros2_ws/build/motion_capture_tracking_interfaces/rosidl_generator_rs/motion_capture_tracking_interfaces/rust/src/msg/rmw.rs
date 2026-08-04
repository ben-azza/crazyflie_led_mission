#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "motion_capture_tracking_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__LatencyInfo() -> *const std::ffi::c_void;
}

#[link(name = "motion_capture_tracking_interfaces__rosidl_generator_c")]
extern "C" {
    fn motion_capture_tracking_interfaces__msg__LatencyInfo__init(msg: *mut LatencyInfo) -> bool;
    fn motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LatencyInfo>, size: usize) -> bool;
    fn motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LatencyInfo>);
    fn motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LatencyInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<LatencyInfo>) -> bool;
}

// Corresponds to motion_capture_tracking_interfaces__msg__LatencyInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LatencyInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,

    /// estimated, in microseconds
    pub latency: u32,

}



impl Default for LatencyInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motion_capture_tracking_interfaces__msg__LatencyInfo__init(&mut msg as *mut _) {
        panic!("Call to motion_capture_tracking_interfaces__msg__LatencyInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LatencyInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__LatencyInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LatencyInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LatencyInfo where Self: Sized {
  const TYPE_NAME: &'static str = "motion_capture_tracking_interfaces/msg/LatencyInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__LatencyInfo() }
  }
}


#[link(name = "motion_capture_tracking_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPose() -> *const std::ffi::c_void;
}

#[link(name = "motion_capture_tracking_interfaces__rosidl_generator_c")]
extern "C" {
    fn motion_capture_tracking_interfaces__msg__NamedPose__init(msg: *mut NamedPose) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NamedPose>, size: usize) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NamedPose>);
    fn motion_capture_tracking_interfaces__msg__NamedPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NamedPose>, out_seq: *mut rosidl_runtime_rs::Sequence<NamedPose>) -> bool;
}

// Corresponds to motion_capture_tracking_interfaces__msg__NamedPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NamedPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for NamedPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motion_capture_tracking_interfaces__msg__NamedPose__init(&mut msg as *mut _) {
        panic!("Call to motion_capture_tracking_interfaces__msg__NamedPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NamedPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NamedPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NamedPose where Self: Sized {
  const TYPE_NAME: &'static str = "motion_capture_tracking_interfaces/msg/NamedPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPose() }
  }
}


#[link(name = "motion_capture_tracking_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPoseArray() -> *const std::ffi::c_void;
}

#[link(name = "motion_capture_tracking_interfaces__rosidl_generator_c")]
extern "C" {
    fn motion_capture_tracking_interfaces__msg__NamedPoseArray__init(msg: *mut NamedPoseArray) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArray>, size: usize) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArray>);
    fn motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NamedPoseArray>, out_seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArray>) -> bool;
}

// Corresponds to motion_capture_tracking_interfaces__msg__NamedPoseArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NamedPoseArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NamedPose>,

}



impl Default for NamedPoseArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motion_capture_tracking_interfaces__msg__NamedPoseArray__init(&mut msg as *mut _) {
        panic!("Call to motion_capture_tracking_interfaces__msg__NamedPoseArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NamedPoseArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NamedPoseArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NamedPoseArray where Self: Sized {
  const TYPE_NAME: &'static str = "motion_capture_tracking_interfaces/msg/NamedPoseArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPoseArray() }
  }
}


#[link(name = "motion_capture_tracking_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2() -> *const std::ffi::c_void;
}

#[link(name = "motion_capture_tracking_interfaces__rosidl_generator_c")]
extern "C" {
    fn motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__init(msg: *mut NamedPoseArrayV2) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArrayV2>, size: usize) -> bool;
    fn motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArrayV2>);
    fn motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NamedPoseArrayV2>, out_seq: *mut rosidl_runtime_rs::Sequence<NamedPoseArrayV2>) -> bool;
}

// Corresponds to motion_capture_tracking_interfaces__msg__NamedPoseArrayV2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NamedPoseArrayV2 {
    /// depending on the setting, the timestamp might be in ROS time when the information arrived or in camera time
    pub header: std_msgs::msg::rmw::Header,

    /// vendor specific, in microseconds
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latencies: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LatencyInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NamedPose>,

}



impl Default for NamedPoseArrayV2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__init(&mut msg as *mut _) {
        panic!("Call to motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NamedPoseArrayV2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motion_capture_tracking_interfaces__msg__NamedPoseArrayV2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NamedPoseArrayV2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NamedPoseArrayV2 where Self: Sized {
  const TYPE_NAME: &'static str = "motion_capture_tracking_interfaces/msg/NamedPoseArrayV2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motion_capture_tracking_interfaces__msg__NamedPoseArrayV2() }
  }
}


