# ROS 2 Tribonacci Action Server and Client

A ROS 2 Humble project demonstrating a **C++ Action Server** and a **Python Action Client** using a custom ROS 2 Action interface.

The project continuously generates the **Tribonacci series** and publishes every generated number as feedback. The calculation continues until the user stops the program with `Ctrl+C`.

---

## Author

**Abhiraj Sawant**

Automation and Robotics Engineering

Email: [sawantabhiraj48@gmail.com](mailto:sawantabhiraj48@gmail.com)

GitHub: Abhiraj-Sawant

---

## Project Overview

The Tribonacci sequence is an extension of the Fibonacci sequence.

Each term is calculated using the previous three terms:

```text
T(n) = T(n-1) + T(n-2) + T(n-3)
```

The sequence starts with:

```text
0, 1, 1
```

Therefore:

```text
0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, ...
```

---

## Features

* ROS 2 Humble
* Custom ROS 2 Action interface
* C++ Action Server
* Python Action Client
* Continuous Tribonacci generation
* Real-time feedback
* Action cancellation
* Final result containing generated values
* ROS 2 launch file
* C++ and Python interoperability

---

## Project Architecture

```text
                  ROS 2 Humble
                       |
                       |
             +---------v---------+
             | Python Action     |
             | Client            |
             |                   |
             | tribonacci_client |
             +---------+---------+
                       |
                       | Goal
                       | start = true
                       |
             +---------v---------+
             | C++ Action Server |
             |                   |
             | tribonacci_server  |
             +---------+---------+
                       |
                       |
                       v
              Tribonacci Series

              0
              1
              1
              2
              4
              7
              13
              24
              44
              ...
```

---

## Package Structure

```text
tribonacci_action_ros2/
│
├── README.md
├── .gitignore
│
└── src/
    │
    ├── tribonacci_interfaces/
    │   ├── action/
    │   │   └── Tribonacci.action
    │   ├── CMakeLists.txt
    │   └── package.xml
    │
    ├── tribonacci_cpp/
    │   ├── src/
    │   │   └── tribonacci_server.cpp
    │   ├── CMakeLists.txt
    │   └── package.xml
    │
    └── tribonacci_py/
        ├── tribonacci_py/
        │   ├── __init__.py
        │   └── tribonacci_client.py
        │
        ├── launch/
        │   └── tribonacci.launch.py
        │
        ├── resource/
        │   └── tribonacci_py
        │
        ├── setup.py
        ├── setup.cfg
        └── package.xml
```

---

# Requirements

## Operating System

Ubuntu 22.04 LTS

## ROS 2

ROS 2 Humble

## Languages

* C++
* Python

## Required ROS 2 packages

```text
rclcpp
rclcpp_action
rclpy
rosidl_default_generators
action_msgs
launch
launch_ros
```

---

# Installation

## 1. Create the workspace

```bash
mkdir -p ~/tribonacci_ws/src
cd ~/tribonacci_ws/src
```

## 2. Clone the repository

```bash
git clone https://github.com/Abhiraj-Sawant/tribonacci_action_ros2.git
```

If you clone the repository directly into `~/tribonacci_ws`, make sure the repository contains the `src` directory as shown above.

---

# Build

Source ROS 2 Humble:

```bash
source /opt/ros/humble/setup.bash
```

Go to the workspace:

```bash
cd ~/tribonacci_ws
```

Build:

```bash
colcon build --symlink-install
```

Source the workspace:

```bash
source ~/tribonacci_ws/install/setup.bash
```

---

# Run the Project

There are two ways to run the project.

## Method 1 – Run Server and Client Separately

### Terminal 1

```bash
source /opt/ros/humble/setup.bash
source ~/tribonacci_ws/install/setup.bash

ros2 run tribonacci_cpp tribonacci_server
```

Expected:

```text
[INFO] [tribonacci_server]: Tribonacci Action Server Started
```

### Terminal 2

```bash
source /opt/ros/humble/setup.bash
source ~/tribonacci_ws/install/setup.bash

ros2 run tribonacci_py tribonacci_client
```

The client starts continuous generation.

Example:

```text
Tribonacci[0] = 0
Tribonacci[1] = 1
Tribonacci[2] = 1
Tribonacci[3] = 2
Tribonacci[4] = 4
Tribonacci[5] = 7
Tribonacci[6] = 13
Tribonacci[7] = 24
Tribonacci[8] = 44
Tribonacci[9] = 81
...
```

---

# Method 2 – Run Using Launch File

The project provides a launch file that starts both the C++ server and Python client.

First source the workspace:

```bash
source /opt/ros/humble/setup.bash
source ~/tribonacci_ws/install/setup.bash
```

Then:

```bash
ros2 launch tribonacci_py tribonacci.launch.py
```

Both nodes will start.

Expected output:

```text
Tribonacci Action Server Started

Starting continuous Tribonacci generation

Tribonacci[0] = 0
Tribonacci[1] = 1
Tribonacci[2] = 1
Tribonacci[3] = 2
Tribonacci[4] = 4
Tribonacci[5] = 7
Tribonacci[6] = 13
Tribonacci[7] = 24
...
```

---

# Stop the Program

The Tribonacci calculation continues until the user stops the program.

Press:

```text
Ctrl + C
```

The client sends a cancellation request to the Action Server.

The server stops the calculation.

Example:

```text
Cancellation requested

Tribonacci generation stopped.
```

---

# ROS 2 Action Interface

The custom action is:

```text
tribonacci_interfaces/action/Tribonacci
```

The action definition is:

```text
bool start
---
int64[] sequence
---
int32 current_index
int64 current_number
```

## Goal

```text
bool start
```

The Python client sends:

```text
start = true
```

This starts continuous Tribonacci generation.

## Feedback

```text
int32 current_index
int64 current_number
```

The server sends feedback for every generated number.

Example:

```text
current_index = 5
current_number = 7
```

## Result

```text
int64[] sequence
```

The result contains the generated sequence when the action is stopped.

---

# Useful ROS 2 Commands

Check available actions:

```bash
ros2 action list
```

Expected:

```text
/tribonacci
```

Check action information:

```bash
ros2 action info /tribonacci
```

Check the custom action definition:

```bash
ros2 interface show tribonacci_interfaces/action/Tribonacci
```

Check running nodes:

```bash
ros2 node list
```

Expected:

```text
/tribonacci_server
/tribonacci_client
```

---

# Action Communication

```text
Python Client
     |
     | Goal
     | start = true
     v
C++ Action Server
     |
     | Calculate
     v
Tribonacci
     |
     | Feedback
     v
Python Client
     |
     +-- 0
     +-- 1
     +-- 1
     +-- 2
     +-- 4
     +-- 7
     +-- 13
     +-- 24
     +-- ...
     
User presses Ctrl+C
     |
     v
Cancel Request
     |
     v
C++ Action Server
     |
     v
Stop Generation
```

---

# Concepts Demonstrated

This project demonstrates:

* ROS 2 Actions
* Custom Action Interfaces
* C++ Action Server
* Python Action Client
* Goal handling
* Feedback publishing
* Result handling
* Goal cancellation
* ROS 2 Nodes
* ROS 2 Launch
* `rclcpp`
* `rclcpp_action`
* `rclpy`
* `colcon`
* C++ and Python communication

---

# Mathematical Formula

The Tribonacci sequence is defined as:

```text
T(n) = T(n-1) + T(n-2) + T(n-3)
```

with:

```text
T(0) = 0
T(1) = 1
T(2) = 1
```

Example:

```text
T(3) = 0 + 1 + 1 = 2

T(4) = 1 + 1 + 2 = 4

T(5) = 1 + 2 + 4 = 7

T(6) = 2 + 4 + 7 = 13
```

---

# ⚠️ Integer Limitation

The implementation uses `int64_t` / `int64`.

The Tribonacci sequence grows rapidly, so eventually the value can exceed the range of a signed 64-bit integer.

For very long-running applications, an overflow check or arbitrary-precision integer implementation should be used.

---

# License

This project is licensed under the Apache License 2.0.

---

## Author

**Abhiraj Sawant**

Automation and Robotics Engineering

Email: [sawantabhiraj48@gmail.com](mailto:sawantabhiraj48@gmail.com)

GitHub: **Abhiraj-Sawant**
