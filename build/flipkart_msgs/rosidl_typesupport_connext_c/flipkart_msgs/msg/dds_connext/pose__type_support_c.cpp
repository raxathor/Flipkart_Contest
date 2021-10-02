// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "flipkart_msgs/msg/pose__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "flipkart_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "flipkart_msgs/msg/detail/pose__struct.h"
#include "flipkart_msgs/msg/detail/pose__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "flipkart_msgs/msg/dds_connext/Pose_Support.h"
#include "flipkart_msgs/msg/dds_connext/Pose_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_Pose__get_type_code()
{
  return flipkart_msgs::msg::dds_::Pose_TypeSupport::get_typecode();
}

static bool
_Pose__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const flipkart_msgs__msg__Pose * ros_message =
    static_cast<const flipkart_msgs__msg__Pose *>(untyped_ros_message);
  flipkart_msgs::msg::dds_::Pose_ * dds_message =
    static_cast<flipkart_msgs::msg::dds_::Pose_ *>(untyped_dds_message);
  // Member name: id0
  {
    dds_message->id0_ = ros_message->id0;
  }
  // Member name: x0
  {
    dds_message->x0_ = ros_message->x0;
  }
  // Member name: y0
  {
    dds_message->y0_ = ros_message->y0;
  }
  // Member name: yaw0
  {
    dds_message->yaw0_ = ros_message->yaw0;
  }
  // Member name: id1
  {
    dds_message->id1_ = ros_message->id1;
  }
  // Member name: x1
  {
    dds_message->x1_ = ros_message->x1;
  }
  // Member name: y1
  {
    dds_message->y1_ = ros_message->y1;
  }
  // Member name: yaw1
  {
    dds_message->yaw1_ = ros_message->yaw1;
  }
  // Member name: id2
  {
    dds_message->id2_ = ros_message->id2;
  }
  // Member name: x2
  {
    dds_message->x2_ = ros_message->x2;
  }
  // Member name: y2
  {
    dds_message->y2_ = ros_message->y2;
  }
  // Member name: yaw2
  {
    dds_message->yaw2_ = ros_message->yaw2;
  }
  // Member name: id3
  {
    dds_message->id3_ = ros_message->id3;
  }
  // Member name: x3
  {
    dds_message->x3_ = ros_message->x3;
  }
  // Member name: y3
  {
    dds_message->y3_ = ros_message->y3;
  }
  // Member name: yaw3
  {
    dds_message->yaw3_ = ros_message->yaw3;
  }
  return true;
}

static bool
_Pose__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const flipkart_msgs::msg::dds_::Pose_ * dds_message =
    static_cast<const flipkart_msgs::msg::dds_::Pose_ *>(untyped_dds_message);
  flipkart_msgs__msg__Pose * ros_message =
    static_cast<flipkart_msgs__msg__Pose *>(untyped_ros_message);
  // Member name: id0
  {
    ros_message->id0 = dds_message->id0_;
  }
  // Member name: x0
  {
    ros_message->x0 = dds_message->x0_;
  }
  // Member name: y0
  {
    ros_message->y0 = dds_message->y0_;
  }
  // Member name: yaw0
  {
    ros_message->yaw0 = dds_message->yaw0_;
  }
  // Member name: id1
  {
    ros_message->id1 = dds_message->id1_;
  }
  // Member name: x1
  {
    ros_message->x1 = dds_message->x1_;
  }
  // Member name: y1
  {
    ros_message->y1 = dds_message->y1_;
  }
  // Member name: yaw1
  {
    ros_message->yaw1 = dds_message->yaw1_;
  }
  // Member name: id2
  {
    ros_message->id2 = dds_message->id2_;
  }
  // Member name: x2
  {
    ros_message->x2 = dds_message->x2_;
  }
  // Member name: y2
  {
    ros_message->y2 = dds_message->y2_;
  }
  // Member name: yaw2
  {
    ros_message->yaw2 = dds_message->yaw2_;
  }
  // Member name: id3
  {
    ros_message->id3 = dds_message->id3_;
  }
  // Member name: x3
  {
    ros_message->x3 = dds_message->x3_;
  }
  // Member name: y3
  {
    ros_message->y3 = dds_message->y3_;
  }
  // Member name: yaw3
  {
    ros_message->yaw3 = dds_message->yaw3_;
  }
  return true;
}


static bool
_Pose__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const flipkart_msgs__msg__Pose * ros_message =
    static_cast<const flipkart_msgs__msg__Pose *>(untyped_ros_message);
  flipkart_msgs::msg::dds_::Pose_ dds_message;
  if (!_Pose__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (flipkart_msgs::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call flipkart_msgs::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (flipkart_msgs::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_Pose__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  flipkart_msgs::msg::dds_::Pose_ * dds_message =
    flipkart_msgs::msg::dds_::Pose_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (flipkart_msgs::msg::dds_::Pose_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Pose__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (flipkart_msgs::msg::dds_::Pose_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Pose__callbacks = {
  "flipkart_msgs::msg",  // message_namespace
  "Pose",  // message_name
  _Pose__get_type_code,  // get_type_code
  _Pose__convert_ros_to_dds,  // convert_ros_to_dds
  _Pose__convert_dds_to_ros,  // convert_dds_to_ros
  _Pose__to_cdr_stream,  // to_cdr_stream
  _Pose__to_message  // to_message
};

static rosidl_message_type_support_t _Pose__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Pose__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  flipkart_msgs, msg,
  Pose)()
{
  return &_Pose__type_support;
}

#if defined(__cplusplus)
}
#endif
