// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorAidSrcGnssPos.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_src_gnss_pos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_aid_src_gnss_pos__struct.h"
#include "px4_msgs/msg/detail/estimator_aid_src_gnss_pos__functions.h"
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


using _EstimatorAidSrcGnssPos__ros_msg_type = px4_msgs__msg__EstimatorAidSrcGnssPos;

static bool _EstimatorAidSrcGnssPos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorAidSrcGnssPos__ros_msg_type * ros_message = static_cast<const _EstimatorAidSrcGnssPos__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr << ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    size_t size = 3;
    auto array_ptr = ros_message->time_last_fuse;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: observation
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 3;
    auto array_ptr = ros_message->test_ratio;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fusion_enabled
  {
    size_t size = 3;
    auto array_ptr = ros_message->fusion_enabled;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation_rejected
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_rejected;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fused
  {
    size_t size = 3;
    auto array_ptr = ros_message->fused;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EstimatorAidSrcGnssPos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorAidSrcGnssPos__ros_msg_type * ros_message = static_cast<_EstimatorAidSrcGnssPos__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr >> ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    size_t size = 3;
    auto array_ptr = ros_message->time_last_fuse;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: observation
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 3;
    auto array_ptr = ros_message->test_ratio;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fusion_enabled
  {
    size_t size = 3;
    auto array_ptr = ros_message->fusion_enabled;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: innovation_rejected
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_rejected;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: fused
  {
    size_t size = 3;
    auto array_ptr = ros_message->fused;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorAidSrcGnssPos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorAidSrcGnssPos__ros_msg_type * ros_message = static_cast<const _EstimatorAidSrcGnssPos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estimator_instance
  {
    size_t item_size = sizeof(ros_message->estimator_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_last_fuse
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->time_last_fuse;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name test_ratio
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusion_enabled
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->fusion_enabled;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_rejected
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation_rejected;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fused
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->fused;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorAidSrcGnssPos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorAidSrcGnssPos(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorAidSrcGnssPos(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: estimator_instance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_last_fuse
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: observation
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: observation_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: test_ratio
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fusion_enabled
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: innovation_rejected
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fused
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorAidSrcGnssPos__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorAidSrcGnssPos(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorAidSrcGnssPos = {
  "px4_msgs::msg",
  "EstimatorAidSrcGnssPos",
  _EstimatorAidSrcGnssPos__cdr_serialize,
  _EstimatorAidSrcGnssPos__cdr_deserialize,
  _EstimatorAidSrcGnssPos__get_serialized_size,
  _EstimatorAidSrcGnssPos__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorAidSrcGnssPos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorAidSrcGnssPos,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorAidSrcGnssPos)() {
  return &_EstimatorAidSrcGnssPos__type_support;
}

#if defined(__cplusplus)
}
#endif
