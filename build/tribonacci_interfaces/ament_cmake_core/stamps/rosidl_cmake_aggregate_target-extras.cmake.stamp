# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target tribonacci_interfaces::tribonacci_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${tribonacci_interfaces_TARGETS}.
if(tribonacci_interfaces_TARGETS AND NOT TARGET tribonacci_interfaces::tribonacci_interfaces)
  add_library(tribonacci_interfaces::tribonacci_interfaces INTERFACE IMPORTED)
  set_target_properties(tribonacci_interfaces::tribonacci_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${tribonacci_interfaces_TARGETS}")
endif()
