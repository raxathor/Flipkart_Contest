// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice
#include "flipkart_msgs/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
flipkart_msgs__msg__Pose__init(flipkart_msgs__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // id0
  // x0
  // y0
  // yaw0
  // id1
  // x1
  // y1
  // yaw1
  // id2
  // x2
  // y2
  // yaw2
  // id3
  // x3
  // y3
  // yaw3
  return true;
}

void
flipkart_msgs__msg__Pose__fini(flipkart_msgs__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // id0
  // x0
  // y0
  // yaw0
  // id1
  // x1
  // y1
  // yaw1
  // id2
  // x2
  // y2
  // yaw2
  // id3
  // x3
  // y3
  // yaw3
}

flipkart_msgs__msg__Pose *
flipkart_msgs__msg__Pose__create()
{
  flipkart_msgs__msg__Pose * msg = (flipkart_msgs__msg__Pose *)malloc(sizeof(flipkart_msgs__msg__Pose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flipkart_msgs__msg__Pose));
  bool success = flipkart_msgs__msg__Pose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
flipkart_msgs__msg__Pose__destroy(flipkart_msgs__msg__Pose * msg)
{
  if (msg) {
    flipkart_msgs__msg__Pose__fini(msg);
  }
  free(msg);
}


bool
flipkart_msgs__msg__Pose__Sequence__init(flipkart_msgs__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  flipkart_msgs__msg__Pose * data = NULL;
  if (size) {
    data = (flipkart_msgs__msg__Pose *)calloc(size, sizeof(flipkart_msgs__msg__Pose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flipkart_msgs__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flipkart_msgs__msg__Pose__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
flipkart_msgs__msg__Pose__Sequence__fini(flipkart_msgs__msg__Pose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      flipkart_msgs__msg__Pose__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

flipkart_msgs__msg__Pose__Sequence *
flipkart_msgs__msg__Pose__Sequence__create(size_t size)
{
  flipkart_msgs__msg__Pose__Sequence * array = (flipkart_msgs__msg__Pose__Sequence *)malloc(sizeof(flipkart_msgs__msg__Pose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = flipkart_msgs__msg__Pose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
flipkart_msgs__msg__Pose__Sequence__destroy(flipkart_msgs__msg__Pose__Sequence * array)
{
  if (array) {
    flipkart_msgs__msg__Pose__Sequence__fini(array);
  }
  free(array);
}
