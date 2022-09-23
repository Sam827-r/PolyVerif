// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lgsvl_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "lgsvl_msgs/msg/detail/vehicle_control_data__struct.h"
#include "lgsvl_msgs/msg/detail/vehicle_control_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lgsvl_msgs__msg__vehicle_control_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lgsvl_msgs.msg._vehicle_control_data.VehicleControlData", full_classname_dest, 55) == 0);
  }
  lgsvl_msgs__msg__VehicleControlData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_pct
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_pct");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_pct = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // braking_pct
    PyObject * field = PyObject_GetAttrString(_pymsg, "braking_pct");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->braking_pct = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_wheel_angular_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_wheel_angular_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_wheel_angular_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lgsvl_msgs__msg__vehicle_control_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleControlData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lgsvl_msgs.msg._vehicle_control_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleControlData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lgsvl_msgs__msg__VehicleControlData * ros_message = (lgsvl_msgs__msg__VehicleControlData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_pct
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_pct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_pct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braking_pct
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->braking_pct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braking_pct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_wheel_angular_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_wheel_angular_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_wheel_angular_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}