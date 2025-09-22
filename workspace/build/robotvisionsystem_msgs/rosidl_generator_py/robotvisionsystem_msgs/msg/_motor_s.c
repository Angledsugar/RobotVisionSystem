// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robotvisionsystem_msgs:msg/Motor.idl
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
#include "robotvisionsystem_msgs/msg/detail/motor__struct.h"
#include "robotvisionsystem_msgs/msg/detail/motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robotvisionsystem_msgs__msg__motor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("robotvisionsystem_msgs.msg._motor.Motor", full_classname_dest, 39) == 0);
  }
  robotvisionsystem_msgs__msg__Motor * ros_message = _ros_message;
  {  // steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motorspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motorspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // breakbool
    PyObject * field = PyObject_GetAttrString(_pymsg, "breakbool");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->breakbool = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robotvisionsystem_msgs__msg__motor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robotvisionsystem_msgs.msg._motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robotvisionsystem_msgs__msg__Motor * ros_message = (robotvisionsystem_msgs__msg__Motor *)raw_ros_message;
  {  // steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motorspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // breakbool
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->breakbool ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "breakbool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
