// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_H_
#define FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose in the package flipkart_msgs.
typedef struct flipkart_msgs__msg__Pose
{
  int32_t id0;
  int32_t x0;
  int32_t y0;
  float yaw0;
  int32_t id1;
  int32_t x1;
  int32_t y1;
  float yaw1;
  int32_t id2;
  int32_t x2;
  int32_t y2;
  float yaw2;
  int32_t id3;
  int32_t x3;
  int32_t y3;
  float yaw3;
} flipkart_msgs__msg__Pose;

// Struct for a sequence of flipkart_msgs__msg__Pose.
typedef struct flipkart_msgs__msg__Pose__Sequence
{
  flipkart_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flipkart_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_H_
