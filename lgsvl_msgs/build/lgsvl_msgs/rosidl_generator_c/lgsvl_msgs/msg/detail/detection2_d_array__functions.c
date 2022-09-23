// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lgsvl_msgs:msg/Detection2DArray.idl
// generated code does not contain a copyright notice
#include "lgsvl_msgs/msg/detail/detection2_d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "lgsvl_msgs/msg/detail/detection2_d__functions.h"

bool
lgsvl_msgs__msg__Detection2DArray__init(lgsvl_msgs__msg__Detection2DArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lgsvl_msgs__msg__Detection2DArray__fini(msg);
    return false;
  }
  // detections
  if (!lgsvl_msgs__msg__Detection2D__Sequence__init(&msg->detections, 0)) {
    lgsvl_msgs__msg__Detection2DArray__fini(msg);
    return false;
  }
  return true;
}

void
lgsvl_msgs__msg__Detection2DArray__fini(lgsvl_msgs__msg__Detection2DArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  lgsvl_msgs__msg__Detection2D__Sequence__fini(&msg->detections);
}

lgsvl_msgs__msg__Detection2DArray *
lgsvl_msgs__msg__Detection2DArray__create()
{
  lgsvl_msgs__msg__Detection2DArray * msg = (lgsvl_msgs__msg__Detection2DArray *)malloc(sizeof(lgsvl_msgs__msg__Detection2DArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lgsvl_msgs__msg__Detection2DArray));
  bool success = lgsvl_msgs__msg__Detection2DArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lgsvl_msgs__msg__Detection2DArray__destroy(lgsvl_msgs__msg__Detection2DArray * msg)
{
  if (msg) {
    lgsvl_msgs__msg__Detection2DArray__fini(msg);
  }
  free(msg);
}


bool
lgsvl_msgs__msg__Detection2DArray__Sequence__init(lgsvl_msgs__msg__Detection2DArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lgsvl_msgs__msg__Detection2DArray * data = NULL;
  if (size) {
    data = (lgsvl_msgs__msg__Detection2DArray *)calloc(size, sizeof(lgsvl_msgs__msg__Detection2DArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lgsvl_msgs__msg__Detection2DArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lgsvl_msgs__msg__Detection2DArray__fini(&data[i - 1]);
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
lgsvl_msgs__msg__Detection2DArray__Sequence__fini(lgsvl_msgs__msg__Detection2DArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lgsvl_msgs__msg__Detection2DArray__fini(&array->data[i]);
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

lgsvl_msgs__msg__Detection2DArray__Sequence *
lgsvl_msgs__msg__Detection2DArray__Sequence__create(size_t size)
{
  lgsvl_msgs__msg__Detection2DArray__Sequence * array = (lgsvl_msgs__msg__Detection2DArray__Sequence *)malloc(sizeof(lgsvl_msgs__msg__Detection2DArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lgsvl_msgs__msg__Detection2DArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lgsvl_msgs__msg__Detection2DArray__Sequence__destroy(lgsvl_msgs__msg__Detection2DArray__Sequence * array)
{
  if (array) {
    lgsvl_msgs__msg__Detection2DArray__Sequence__fini(array);
  }
  free(array);
}
