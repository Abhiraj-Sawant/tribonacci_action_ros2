
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Goal() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_Goal__init(msg: *mut Tribonacci_Goal) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Goal>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Goal>);
    fn tribonacci_interfaces__action__Tribonacci_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Goal>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: bool,

}



impl Default for Tribonacci_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_Goal__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Goal() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Result() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_Result__init(msg: *mut Tribonacci_Result) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Result>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Result>);
    fn tribonacci_interfaces__action__Tribonacci_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Result>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for Tribonacci_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_Result__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_Result where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Result() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_Feedback__init(msg: *mut Tribonacci_Feedback) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Feedback>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Feedback>);
    fn tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_Feedback>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_index: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_number: i64,

}



impl Default for Tribonacci_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_Feedback__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_Feedback() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(msg: *mut Tribonacci_FeedbackMessage) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_FeedbackMessage>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_FeedbackMessage>);
    fn tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_FeedbackMessage>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Tribonacci_Feedback,

}



impl Default for Tribonacci_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_FeedbackMessage() }
  }
}




#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(msg: *mut Tribonacci_SendGoal_Request) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Request>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Request>);
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Request>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Tribonacci_Goal,

}



impl Default for Tribonacci_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal_Request() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(msg: *mut Tribonacci_SendGoal_Response) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Response>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Response>);
    fn tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_SendGoal_Response>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Tribonacci_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal_Response() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(msg: *mut Tribonacci_GetResult_Request) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Request>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Request>);
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Request>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Tribonacci_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult_Request() }
  }
}


#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "tribonacci_interfaces__rosidl_generator_c")]
extern "C" {
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(msg: *mut Tribonacci_GetResult_Response) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Response>, size: usize) -> bool;
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Response>);
    fn tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Tribonacci_GetResult_Response>) -> bool;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tribonacci_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Tribonacci_Result,

}



impl Default for Tribonacci_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tribonacci_interfaces__action__Tribonacci_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to tribonacci_interfaces__action__Tribonacci_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tribonacci_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tribonacci_interfaces__action__Tribonacci_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tribonacci_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tribonacci_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tribonacci_interfaces/action/Tribonacci_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult_Response() }
  }
}






#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Tribonacci_SendGoal;

impl rosidl_runtime_rs::Service for Tribonacci_SendGoal {
    type Request = Tribonacci_SendGoal_Request;
    type Response = Tribonacci_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tribonacci_interfaces__action__Tribonacci_SendGoal() }
    }
}




#[link(name = "tribonacci_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to tribonacci_interfaces__action__Tribonacci_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Tribonacci_GetResult;

impl rosidl_runtime_rs::Service for Tribonacci_GetResult {
    type Request = Tribonacci_GetResult_Request;
    type Response = Tribonacci_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tribonacci_interfaces__action__Tribonacci_GetResult() }
    }
}


