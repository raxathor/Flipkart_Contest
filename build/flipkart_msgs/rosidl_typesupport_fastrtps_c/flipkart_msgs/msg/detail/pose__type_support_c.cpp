// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice
#include "flipkart_msgs/msg/detail/pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flipkart_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flipkart_msgs/msg/detail/pose__struct.h"
#include "flipkart_msgs/msg/detail/pose__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Pose__ros_msg_type = flipkart_msgs__msg__Pose;

static bool _Pose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Pose__ros_msg_type * ros_message = static_cast<const _Pose__ros_msg_type *>(untyped_ros_message);
  // Field name: id0
  {
    cdr << ros_message->id0;
  }

  // Field name: x0
  {
    cdr << ros_message->x0;
  }

  // Field name: y0
  {
    cdr << ros_message->y0;
  }

  // Field name: yaw0
  {
    cdr << ros_message->yaw0;
  }

  // Field name: id1
  {
    cdr << ros_message->id1;
  }

  // Field name: x1
  {
    cdr << ros_message->x1;
  }

  // Field name: y1
  {
    cdr << ros_message->y1;
  }

  // Field name: yaw1
  {
    cdr << ros_message->yaw1;
  }

  // Field name: id2
  {
    cdr << ros_message->id2;
  }

  // Field name: x2
  {
    cdr << ros_message->x2;
  }

  // Field name: y2
  {
    cdr << ros_message->y2;
  }

  // Field name: yaw2
  {
    cdr << ros_message->yaw2;
  }

  // Field name: id3
  {
    cdr << ros_message->id3;
  }

  // Field name: x3
  {
    cdr << ros_message->x3;
  }

  // Field name: y3
  {
    cdr << ros_message->y3;
  }

  // Field name: yaw3
  {
    cdr << ros_message->yaw3;
  }

  return true;
}

static bool _Pose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Pose__ros_msg_type * ros_message = static_cast<_Pose__ros_msg_type *>(untyped_ros_message);
  // Field name: id0
  {
    cdr >> ros_message->id0;
  }

  // Field name: x0
  {
    cdr >> ros_message->x0;
  }

  // Field name: y0
  {
    cdr >> ros_message->y0;
  }

  // Field name: yaw0
  {
    cdr >> ros_message->yaw0;
  }

  // Field name: id1
  {
    cdr >> ros_message->id1;
  }

  // Field name: x1
  {
    cdr >> ros_message->x1;
  }

  // Field name: y1
  {
    cdr >> ros_message->y1;
  }

  // Field name: yaw1
  {
    cdr >> ros_message->yaw1;
  }

  // Field name: id2
  {
    cdr >> ros_message->id2;
  }

  // Field name: x2
  {
    cdr >> ros_message->x2;
  }

  // Field name: y2
  {
    cdr >> ros_message->y2;
  }

  // Field name: yaw2
  {
    cdr >> ros_message->yaw2;
  }

  // Field name: id3
  {
    cdr >> ros_message->id3;
  }

  // Field name: x3
  {
    cdr >> ros_message->x3;
  }

  // Field name: y3
  {
    cdr >> ros_message->y3;
  }

  // Field name: yaw3
  {
    cdr >> ros_message->yaw3;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flipkart_msgs
size_t get_serialized_size_flipkart_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pose__ros_msg_type * ros_message = static_cast<const _Pose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id0
  {
    size_t item_size = sizeof(ros_message->id0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x0
  {
    size_t item_size = sizeof(ros_message->x0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y0
  {
    size_t item_size = sizeof(ros_message->y0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw0
  {
    size_t item_size = sizeof(ros_message->yaw0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id1
  {
    size_t item_size = sizeof(ros_message->id1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x1
  {
    size_t item_size = sizeof(ros_message->x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y1
  {
    size_t item_size = sizeof(ros_message->y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw1
  {
    size_t item_size = sizeof(ros_message->yaw1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id2
  {
    size_t item_size = sizeof(ros_message->id2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x2
  {
    size_t item_size = sizeof(ros_message->x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y2
  {
    size_t item_size = sizeof(ros_message->y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw2
  {
    size_t item_size = sizeof(ros_message->yaw2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id3
  {
    size_t item_size = sizeof(ros_message->id3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x3
  {
    size_t item_size = sizeof(ros_message->x3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y3
  {
    size_t item_size = sizeof(ros_message->y3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw3
  {
    size_t item_size = sizeof(ros_message->yaw3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flipkart_msgs__msg__Pose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flipkart_msgs
size_t max_serialized_size_flipkart_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: id1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: id2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: id3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Pose__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_flipkart_msgs__msg__Pose(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Pose = {
  "flipkart_msgs::msg",
  "Pose",
  _Pose__cdr_serialize,
  _Pose__cdr_deserialize,
  _Pose__get_serialized_size,
  _Pose__max_serialized_size
};

static rosidl_message_type_support_t _Pose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flipkart_msgs, msg, Pose)() {
  return &_Pose__type_support;
}

#if defined(__cplusplus)
}
#endif
