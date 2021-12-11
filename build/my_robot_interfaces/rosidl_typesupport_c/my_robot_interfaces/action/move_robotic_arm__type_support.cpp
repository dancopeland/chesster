// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:action/MoveRoboticArm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_Goal_type_support_ids_t;

static const _MoveRoboticArm_Goal_type_support_ids_t _MoveRoboticArm_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_Goal_type_support_symbol_names_t _MoveRoboticArm_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_Goal)),
  }
};

typedef struct _MoveRoboticArm_Goal_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_Goal_type_support_data_t;

static _MoveRoboticArm_Goal_type_support_data_t _MoveRoboticArm_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_Goal_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_Goal)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_Result_type_support_ids_t;

static const _MoveRoboticArm_Result_type_support_ids_t _MoveRoboticArm_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_Result_type_support_symbol_names_t _MoveRoboticArm_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_Result)),
  }
};

typedef struct _MoveRoboticArm_Result_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_Result_type_support_data_t;

static _MoveRoboticArm_Result_type_support_data_t _MoveRoboticArm_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_Result_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_Result)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_Feedback_type_support_ids_t;

static const _MoveRoboticArm_Feedback_type_support_ids_t _MoveRoboticArm_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_Feedback_type_support_symbol_names_t _MoveRoboticArm_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_Feedback)),
  }
};

typedef struct _MoveRoboticArm_Feedback_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_Feedback_type_support_data_t;

static _MoveRoboticArm_Feedback_type_support_data_t _MoveRoboticArm_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_Feedback_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_Feedback)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_SendGoal_Request_type_support_ids_t;

static const _MoveRoboticArm_SendGoal_Request_type_support_ids_t _MoveRoboticArm_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_SendGoal_Request_type_support_symbol_names_t _MoveRoboticArm_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Request)),
  }
};

typedef struct _MoveRoboticArm_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_SendGoal_Request_type_support_data_t;

static _MoveRoboticArm_SendGoal_Request_type_support_data_t _MoveRoboticArm_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_SendGoal_Request_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_SendGoal_Response_type_support_ids_t;

static const _MoveRoboticArm_SendGoal_Response_type_support_ids_t _MoveRoboticArm_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_SendGoal_Response_type_support_symbol_names_t _MoveRoboticArm_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Response)),
  }
};

typedef struct _MoveRoboticArm_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_SendGoal_Response_type_support_data_t;

static _MoveRoboticArm_SendGoal_Response_type_support_data_t _MoveRoboticArm_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_SendGoal_Response_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_SendGoal_type_support_ids_t;

static const _MoveRoboticArm_SendGoal_type_support_ids_t _MoveRoboticArm_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_SendGoal_type_support_symbol_names_t _MoveRoboticArm_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal)),
  }
};

typedef struct _MoveRoboticArm_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_SendGoal_type_support_data_t;

static _MoveRoboticArm_SendGoal_type_support_data_t _MoveRoboticArm_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_SendGoal_service_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveRoboticArm_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_GetResult_Request_type_support_ids_t;

static const _MoveRoboticArm_GetResult_Request_type_support_ids_t _MoveRoboticArm_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_GetResult_Request_type_support_symbol_names_t _MoveRoboticArm_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Request)),
  }
};

typedef struct _MoveRoboticArm_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_GetResult_Request_type_support_data_t;

static _MoveRoboticArm_GetResult_Request_type_support_data_t _MoveRoboticArm_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_GetResult_Request_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Request)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_GetResult_Response_type_support_ids_t;

static const _MoveRoboticArm_GetResult_Response_type_support_ids_t _MoveRoboticArm_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_GetResult_Response_type_support_symbol_names_t _MoveRoboticArm_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Response)),
  }
};

typedef struct _MoveRoboticArm_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_GetResult_Response_type_support_data_t;

static _MoveRoboticArm_GetResult_Response_type_support_data_t _MoveRoboticArm_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_GetResult_Response_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_GetResult_Response)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_GetResult_type_support_ids_t;

static const _MoveRoboticArm_GetResult_type_support_ids_t _MoveRoboticArm_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_GetResult_type_support_symbol_names_t _MoveRoboticArm_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_GetResult)),
  }
};

typedef struct _MoveRoboticArm_GetResult_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_GetResult_type_support_data_t;

static _MoveRoboticArm_GetResult_type_support_data_t _MoveRoboticArm_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_GetResult_service_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveRoboticArm_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_GetResult)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRoboticArm_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRoboticArm_FeedbackMessage_type_support_ids_t;

static const _MoveRoboticArm_FeedbackMessage_type_support_ids_t _MoveRoboticArm_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRoboticArm_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRoboticArm_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRoboticArm_FeedbackMessage_type_support_symbol_names_t _MoveRoboticArm_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, action, MoveRoboticArm_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, action, MoveRoboticArm_FeedbackMessage)),
  }
};

typedef struct _MoveRoboticArm_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveRoboticArm_FeedbackMessage_type_support_data_t;

static _MoveRoboticArm_FeedbackMessage_type_support_data_t _MoveRoboticArm_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRoboticArm_FeedbackMessage_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_MoveRoboticArm_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRoboticArm_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRoboticArm_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRoboticArm_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRoboticArm_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_FeedbackMessage)() {
  return &::my_robot_interfaces::action::rosidl_typesupport_c::MoveRoboticArm_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "my_robot_interfaces/action/move_robotic_arm.h"
#include "my_robot_interfaces/action/detail/move_robotic_arm__type_support.h"

static rosidl_action_type_support_t _my_robot_interfaces__action__MoveRoboticArm__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm)()
{
  // Thread-safe by always writing the same values to the static struct
  _my_robot_interfaces__action__MoveRoboticArm__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_SendGoal)();
  _my_robot_interfaces__action__MoveRoboticArm__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_GetResult)();
  _my_robot_interfaces__action__MoveRoboticArm__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _my_robot_interfaces__action__MoveRoboticArm__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, my_robot_interfaces, action, MoveRoboticArm_FeedbackMessage)();
  _my_robot_interfaces__action__MoveRoboticArm__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_my_robot_interfaces__action__MoveRoboticArm__typesupport_c;
}

#ifdef __cplusplus
}
#endif