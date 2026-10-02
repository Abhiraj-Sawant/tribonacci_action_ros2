cmake_minimum_required(VERSION 3.8)
project(tribonacci_cpp)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(tribonacci_interfaces REQUIRED)

add_executable(tribonacci_server
src/tribonacci_server.cpp
)

ament_target_dependencies(tribonacci_server
rclcpp
rclcpp_action
tribonacci_interfaces
)

install(
TARGETS tribonacci_server
DESTINATION lib/${PROJECT_NAME}
)

ament_package()

