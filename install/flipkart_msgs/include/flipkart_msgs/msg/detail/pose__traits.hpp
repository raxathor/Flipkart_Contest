// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flipkart_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef FLIPKART_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
#define FLIPKART_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_

#include "flipkart_msgs/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flipkart_msgs::msg::Pose>()
{
  return "flipkart_msgs::msg::Pose";
}

template<>
inline const char * name<flipkart_msgs::msg::Pose>()
{
  return "flipkart_msgs/msg/Pose";
}

template<>
struct has_fixed_size<flipkart_msgs::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flipkart_msgs::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flipkart_msgs::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLIPKART_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
