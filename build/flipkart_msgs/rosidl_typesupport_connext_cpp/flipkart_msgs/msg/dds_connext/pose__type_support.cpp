// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "flipkart_msgs/msg/pose__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace flipkart_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Pose()
{
  return flipkart_msgs::msg::dds_::Pose_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const flipkart_msgs::msg::Pose & ros_message,
  flipkart_msgs::msg::dds_::Pose_ & dds_message)
{
  // member.name id0
  dds_message.id0_ =
    ros_message.id0;

  // member.name x0
  dds_message.x0_ =
    ros_message.x0;

  // member.name y0
  dds_message.y0_ =
    ros_message.y0;

  // member.name yaw0
  dds_message.yaw0_ =
    ros_message.yaw0;

  // member.name id1
  dds_message.id1_ =
    ros_message.id1;

  // member.name x1
  dds_message.x1_ =
    ros_message.x1;

  // member.name y1
  dds_message.y1_ =
    ros_message.y1;

  // member.name yaw1
  dds_message.yaw1_ =
    ros_message.yaw1;

  // member.name id2
  dds_message.id2_ =
    ros_message.id2;

  // member.name x2
  dds_message.x2_ =
    ros_message.x2;

  // member.name y2
  dds_message.y2_ =
    ros_message.y2;

  // member.name yaw2
  dds_message.yaw2_ =
    ros_message.yaw2;

  // member.name id3
  dds_message.id3_ =
    ros_message.id3;

  // member.name x3
  dds_message.x3_ =
    ros_message.x3;

  // member.name y3
  dds_message.y3_ =
    ros_message.y3;

  // member.name yaw3
  dds_message.yaw3_ =
    ros_message.yaw3;

  return true;
}

bool
convert_dds_message_to_ros(
  const flipkart_msgs::msg::dds_::Pose_ & dds_message,
  flipkart_msgs::msg::Pose & ros_message)
{
  // member.name id0
  ros_message.id0 =
    dds_message.id0_;

  // member.name x0
  ros_message.x0 =
    dds_message.x0_;

  // member.name y0
  ros_message.y0 =
    dds_message.y0_;

  // member.name yaw0
  ros_message.yaw0 =
    dds_message.yaw0_;

  // member.name id1
  ros_message.id1 =
    dds_message.id1_;

  // member.name x1
  ros_message.x1 =
    dds_message.x1_;

  // member.name y1
  ros_message.y1 =
    dds_message.y1_;

  // member.name yaw1
  ros_message.yaw1 =
    dds_message.yaw1_;

  // member.name id2
  ros_message.id2 =
    dds_message.id2_;

  // member.name x2
  ros_message.x2 =
    dds_message.x2_;

  // member.name y2
  ros_message.y2 =
    dds_message.y2_;

  // member.name yaw2
  ros_message.yaw2 =
    dds_message.yaw2_;

  // member.name id3
  ros_message.id3 =
    dds_message.id3_;

  // member.name x3
  ros_message.x3 =
    dds_message.x3_;

  // member.name y3
  ros_message.y3 =
    dds_message.y3_;

  // member.name yaw3
  ros_message.yaw3 =
    dds_message.yaw3_;

  return true;
}

bool
to_cdr_stream__Pose(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const flipkart_msgs::msg::Pose & ros_message =
    *(const flipkart_msgs::msg::Pose *)untyped_ros_message;

  // create a respective connext dds type
  flipkart_msgs::msg::dds_::Pose_ * dds_message = flipkart_msgs::msg::dds_::Pose_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (flipkart_msgs::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (flipkart_msgs::msg::dds_::Pose_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Pose(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
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

  flipkart_msgs::msg::Pose & ros_message =
    *(flipkart_msgs::msg::Pose *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (flipkart_msgs::msg::dds_::Pose_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Pose__callbacks = {
  "flipkart_msgs::msg",
  "Pose",
  &get_type_code__Pose,
  nullptr,
  nullptr,
  &to_cdr_stream__Pose,
  &to_message__Pose
};

static rosidl_message_type_support_t _Pose__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Pose__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace flipkart_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_flipkart_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<flipkart_msgs::msg::Pose>()
{
  return &flipkart_msgs::msg::typesupport_connext_cpp::_Pose__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  flipkart_msgs, msg,
  Pose)()
{
  return &flipkart_msgs::msg::typesupport_connext_cpp::_Pose__handle;
}

#ifdef __cplusplus
}
#endif
