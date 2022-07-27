// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failure_detector_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__FailureDetectorStatus__init(px4_msgs__msg__FailureDetectorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // fd_roll
  // fd_pitch
  // fd_alt
  // fd_ext
  // fd_arm_escs
  // fd_battery
  // fd_imbalanced_prop
  // fd_motor
  // imbalanced_prop_metric
  // motor_failure_mask
  return true;
}

void
px4_msgs__msg__FailureDetectorStatus__fini(px4_msgs__msg__FailureDetectorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // fd_roll
  // fd_pitch
  // fd_alt
  // fd_ext
  // fd_arm_escs
  // fd_battery
  // fd_imbalanced_prop
  // fd_motor
  // imbalanced_prop_metric
  // motor_failure_mask
}

px4_msgs__msg__FailureDetectorStatus *
px4_msgs__msg__FailureDetectorStatus__create()
{
  px4_msgs__msg__FailureDetectorStatus * msg = (px4_msgs__msg__FailureDetectorStatus *)malloc(sizeof(px4_msgs__msg__FailureDetectorStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FailureDetectorStatus));
  bool success = px4_msgs__msg__FailureDetectorStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FailureDetectorStatus__destroy(px4_msgs__msg__FailureDetectorStatus * msg)
{
  if (msg) {
    px4_msgs__msg__FailureDetectorStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__FailureDetectorStatus__Sequence__init(px4_msgs__msg__FailureDetectorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__FailureDetectorStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__FailureDetectorStatus *)calloc(size, sizeof(px4_msgs__msg__FailureDetectorStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FailureDetectorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FailureDetectorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__FailureDetectorStatus__Sequence__fini(px4_msgs__msg__FailureDetectorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__FailureDetectorStatus__fini(&array->data[i]);
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

px4_msgs__msg__FailureDetectorStatus__Sequence *
px4_msgs__msg__FailureDetectorStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__FailureDetectorStatus__Sequence * array = (px4_msgs__msg__FailureDetectorStatus__Sequence *)malloc(sizeof(px4_msgs__msg__FailureDetectorStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FailureDetectorStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FailureDetectorStatus__Sequence__destroy(px4_msgs__msg__FailureDetectorStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__FailureDetectorStatus__Sequence__fini(array);
  }
  free(array);
}
