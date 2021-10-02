// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef FLIPKART_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
#define FLIPKART_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_

#include "flipkart_msgs/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flipkart_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose_yaw3
{
public:
  explicit Init_Pose_yaw3(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  ::flipkart_msgs::msg::Pose yaw3(::flipkart_msgs::msg::Pose::_yaw3_type arg)
  {
    msg_.yaw3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_y3
{
public:
  explicit Init_Pose_y3(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_yaw3 y3(::flipkart_msgs::msg::Pose::_y3_type arg)
  {
    msg_.y3 = std::move(arg);
    return Init_Pose_yaw3(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_x3
{
public:
  explicit Init_Pose_x3(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_y3 x3(::flipkart_msgs::msg::Pose::_x3_type arg)
  {
    msg_.x3 = std::move(arg);
    return Init_Pose_y3(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_id3
{
public:
  explicit Init_Pose_id3(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_x3 id3(::flipkart_msgs::msg::Pose::_id3_type arg)
  {
    msg_.id3 = std::move(arg);
    return Init_Pose_x3(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_yaw2
{
public:
  explicit Init_Pose_yaw2(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_id3 yaw2(::flipkart_msgs::msg::Pose::_yaw2_type arg)
  {
    msg_.yaw2 = std::move(arg);
    return Init_Pose_id3(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_y2
{
public:
  explicit Init_Pose_y2(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_yaw2 y2(::flipkart_msgs::msg::Pose::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Pose_yaw2(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_x2
{
public:
  explicit Init_Pose_x2(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_y2 x2(::flipkart_msgs::msg::Pose::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Pose_y2(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_id2
{
public:
  explicit Init_Pose_id2(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_x2 id2(::flipkart_msgs::msg::Pose::_id2_type arg)
  {
    msg_.id2 = std::move(arg);
    return Init_Pose_x2(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_yaw1
{
public:
  explicit Init_Pose_yaw1(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_id2 yaw1(::flipkart_msgs::msg::Pose::_yaw1_type arg)
  {
    msg_.yaw1 = std::move(arg);
    return Init_Pose_id2(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_y1
{
public:
  explicit Init_Pose_y1(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_yaw1 y1(::flipkart_msgs::msg::Pose::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Pose_yaw1(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_x1
{
public:
  explicit Init_Pose_x1(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_y1 x1(::flipkart_msgs::msg::Pose::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Pose_y1(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_id1
{
public:
  explicit Init_Pose_id1(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_x1 id1(::flipkart_msgs::msg::Pose::_id1_type arg)
  {
    msg_.id1 = std::move(arg);
    return Init_Pose_x1(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_yaw0
{
public:
  explicit Init_Pose_yaw0(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_id1 yaw0(::flipkart_msgs::msg::Pose::_yaw0_type arg)
  {
    msg_.yaw0 = std::move(arg);
    return Init_Pose_id1(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_y0
{
public:
  explicit Init_Pose_y0(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_yaw0 y0(::flipkart_msgs::msg::Pose::_y0_type arg)
  {
    msg_.y0 = std::move(arg);
    return Init_Pose_yaw0(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_x0
{
public:
  explicit Init_Pose_x0(::flipkart_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_y0 x0(::flipkart_msgs::msg::Pose::_x0_type arg)
  {
    msg_.x0 = std::move(arg);
    return Init_Pose_y0(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

class Init_Pose_id0
{
public:
  Init_Pose_id0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_x0 id0(::flipkart_msgs::msg::Pose::_id0_type arg)
  {
    msg_.id0 = std::move(arg);
    return Init_Pose_x0(msg_);
  }

private:
  ::flipkart_msgs::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flipkart_msgs::msg::Pose>()
{
  return flipkart_msgs::msg::builder::Init_Pose_id0();
}

}  // namespace flipkart_msgs

#endif  // FLIPKART_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
