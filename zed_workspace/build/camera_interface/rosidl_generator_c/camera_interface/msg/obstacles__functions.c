// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface:msg/Obstacles.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/obstacles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `objects`
#include "camera_interface/msg/camera__functions.h"

bool
camera_interface__msg__Obstacles__init(camera_interface__msg__Obstacles * msg)
{
  if (!msg) {
    return false;
  }
  // angle_increment
  // objects
  if (!camera_interface__msg__Camera__Sequence__init(&msg->objects, 0)) {
    camera_interface__msg__Obstacles__fini(msg);
    return false;
  }
  return true;
}

void
camera_interface__msg__Obstacles__fini(camera_interface__msg__Obstacles * msg)
{
  if (!msg) {
    return;
  }
  // angle_increment
  // objects
  camera_interface__msg__Camera__Sequence__fini(&msg->objects);
}

camera_interface__msg__Obstacles *
camera_interface__msg__Obstacles__create()
{
  camera_interface__msg__Obstacles * msg = (camera_interface__msg__Obstacles *)malloc(sizeof(camera_interface__msg__Obstacles));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface__msg__Obstacles));
  bool success = camera_interface__msg__Obstacles__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
camera_interface__msg__Obstacles__destroy(camera_interface__msg__Obstacles * msg)
{
  if (msg) {
    camera_interface__msg__Obstacles__fini(msg);
  }
  free(msg);
}


bool
camera_interface__msg__Obstacles__Sequence__init(camera_interface__msg__Obstacles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  camera_interface__msg__Obstacles * data = NULL;
  if (size) {
    data = (camera_interface__msg__Obstacles *)calloc(size, sizeof(camera_interface__msg__Obstacles));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface__msg__Obstacles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface__msg__Obstacles__fini(&data[i - 1]);
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
camera_interface__msg__Obstacles__Sequence__fini(camera_interface__msg__Obstacles__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_interface__msg__Obstacles__fini(&array->data[i]);
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

camera_interface__msg__Obstacles__Sequence *
camera_interface__msg__Obstacles__Sequence__create(size_t size)
{
  camera_interface__msg__Obstacles__Sequence * array = (camera_interface__msg__Obstacles__Sequence *)malloc(sizeof(camera_interface__msg__Obstacles__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = camera_interface__msg__Obstacles__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
camera_interface__msg__Obstacles__Sequence__destroy(camera_interface__msg__Obstacles__Sequence * array)
{
  if (array) {
    camera_interface__msg__Obstacles__Sequence__fini(array);
  }
  free(array);
}
