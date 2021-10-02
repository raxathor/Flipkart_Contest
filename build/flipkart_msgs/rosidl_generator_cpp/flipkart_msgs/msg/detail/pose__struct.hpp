// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
#define FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__flipkart_msgs__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__flipkart_msgs__msg__Pose __declspec(deprecated)
#endif

namespace flipkart_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id0 = 0l;
      this->x0 = 0l;
      this->y0 = 0l;
      this->yaw0 = 0.0f;
      this->id1 = 0l;
      this->x1 = 0l;
      this->y1 = 0l;
      this->yaw1 = 0.0f;
      this->id2 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->yaw2 = 0.0f;
      this->id3 = 0l;
      this->x3 = 0l;
      this->y3 = 0l;
      this->yaw3 = 0.0f;
    }
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id0 = 0l;
      this->x0 = 0l;
      this->y0 = 0l;
      this->yaw0 = 0.0f;
      this->id1 = 0l;
      this->x1 = 0l;
      this->y1 = 0l;
      this->yaw1 = 0.0f;
      this->id2 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->yaw2 = 0.0f;
      this->id3 = 0l;
      this->x3 = 0l;
      this->y3 = 0l;
      this->yaw3 = 0.0f;
    }
  }

  // field types and members
  using _id0_type =
    int32_t;
  _id0_type id0;
  using _x0_type =
    int32_t;
  _x0_type x0;
  using _y0_type =
    int32_t;
  _y0_type y0;
  using _yaw0_type =
    float;
  _yaw0_type yaw0;
  using _id1_type =
    int32_t;
  _id1_type id1;
  using _x1_type =
    int32_t;
  _x1_type x1;
  using _y1_type =
    int32_t;
  _y1_type y1;
  using _yaw1_type =
    float;
  _yaw1_type yaw1;
  using _id2_type =
    int32_t;
  _id2_type id2;
  using _x2_type =
    int32_t;
  _x2_type x2;
  using _y2_type =
    int32_t;
  _y2_type y2;
  using _yaw2_type =
    float;
  _yaw2_type yaw2;
  using _id3_type =
    int32_t;
  _id3_type id3;
  using _x3_type =
    int32_t;
  _x3_type x3;
  using _y3_type =
    int32_t;
  _y3_type y3;
  using _yaw3_type =
    float;
  _yaw3_type yaw3;

  // setters for named parameter idiom
  Type & set__id0(
    const int32_t & _arg)
  {
    this->id0 = _arg;
    return *this;
  }
  Type & set__x0(
    const int32_t & _arg)
  {
    this->x0 = _arg;
    return *this;
  }
  Type & set__y0(
    const int32_t & _arg)
  {
    this->y0 = _arg;
    return *this;
  }
  Type & set__yaw0(
    const float & _arg)
  {
    this->yaw0 = _arg;
    return *this;
  }
  Type & set__id1(
    const int32_t & _arg)
  {
    this->id1 = _arg;
    return *this;
  }
  Type & set__x1(
    const int32_t & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const int32_t & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__yaw1(
    const float & _arg)
  {
    this->yaw1 = _arg;
    return *this;
  }
  Type & set__id2(
    const int32_t & _arg)
  {
    this->id2 = _arg;
    return *this;
  }
  Type & set__x2(
    const int32_t & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const int32_t & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__yaw2(
    const float & _arg)
  {
    this->yaw2 = _arg;
    return *this;
  }
  Type & set__id3(
    const int32_t & _arg)
  {
    this->id3 = _arg;
    return *this;
  }
  Type & set__x3(
    const int32_t & _arg)
  {
    this->x3 = _arg;
    return *this;
  }
  Type & set__y3(
    const int32_t & _arg)
  {
    this->y3 = _arg;
    return *this;
  }
  Type & set__yaw3(
    const float & _arg)
  {
    this->yaw3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flipkart_msgs::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const flipkart_msgs::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flipkart_msgs::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flipkart_msgs::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flipkart_msgs__msg__Pose
    std::shared_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flipkart_msgs__msg__Pose
    std::shared_ptr<flipkart_msgs::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->id0 != other.id0) {
      return false;
    }
    if (this->x0 != other.x0) {
      return false;
    }
    if (this->y0 != other.y0) {
      return false;
    }
    if (this->yaw0 != other.yaw0) {
      return false;
    }
    if (this->id1 != other.id1) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->yaw1 != other.yaw1) {
      return false;
    }
    if (this->id2 != other.id2) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->yaw2 != other.yaw2) {
      return false;
    }
    if (this->id3 != other.id3) {
      return false;
    }
    if (this->x3 != other.x3) {
      return false;
    }
    if (this->y3 != other.y3) {
      return false;
    }
    if (this->yaw3 != other.yaw3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  flipkart_msgs::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flipkart_msgs

#endif  // FLIPKART_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
