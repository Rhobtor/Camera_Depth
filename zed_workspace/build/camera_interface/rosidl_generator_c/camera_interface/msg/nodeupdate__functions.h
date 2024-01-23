// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Nodeupdate.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__NODEUPDATE__FUNCTIONS_H_
#define CAMERA_INTERFACE__MSG__NODEUPDATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "camera_interface/msg/rosidl_generator_c__visibility_control.h"

#include "camera_interface/msg/nodeupdate__struct.h"

/// Initialize msg/Nodeupdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_interface__msg__Nodeupdate
 * )) before or use
 * camera_interface__msg__Nodeupdate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Nodeupdate__init(camera_interface__msg__Nodeupdate * msg);

/// Finalize msg/Nodeupdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Nodeupdate__fini(camera_interface__msg__Nodeupdate * msg);

/// Create msg/Nodeupdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_interface__msg__Nodeupdate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
camera_interface__msg__Nodeupdate *
camera_interface__msg__Nodeupdate__create();

/// Destroy msg/Nodeupdate message.
/**
 * It calls
 * camera_interface__msg__Nodeupdate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Nodeupdate__destroy(camera_interface__msg__Nodeupdate * msg);


/// Initialize array of msg/Nodeupdate messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_interface__msg__Nodeupdate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Nodeupdate__Sequence__init(camera_interface__msg__Nodeupdate__Sequence * array, size_t size);

/// Finalize array of msg/Nodeupdate messages.
/**
 * It calls
 * camera_interface__msg__Nodeupdate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Nodeupdate__Sequence__fini(camera_interface__msg__Nodeupdate__Sequence * array);

/// Create array of msg/Nodeupdate messages.
/**
 * It allocates the memory for the array and calls
 * camera_interface__msg__Nodeupdate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
camera_interface__msg__Nodeupdate__Sequence *
camera_interface__msg__Nodeupdate__Sequence__create(size_t size);

/// Destroy array of msg/Nodeupdate messages.
/**
 * It calls
 * camera_interface__msg__Nodeupdate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Nodeupdate__Sequence__destroy(camera_interface__msg__Nodeupdate__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__NODEUPDATE__FUNCTIONS_H_
