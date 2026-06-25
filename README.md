# Autonomous-Line-Follower-Robot
An ESP32-based autonomous line follower robot using the RLS08 8-channel IR sensor array and L298N motor driver. Designed with PID control for high-speed line tracking and awarded 1st Place at MeshMerize (COGNITIA 2025).
# ESP32 Line Follower Robot

## Overview

This project presents an autonomous high-speed Line Follower Robot developed using the ESP32 microcontroller, RLS08 8-channel infrared sensor array, and L298N motor driver. The robot detects the position of a black line and continuously adjusts motor speeds using PID control to achieve accurate and stable navigation through complex tracks.

The project secured **1st Place at MeshMerize (COGNITIA 2025)** for its reliable performance and fast line-following capabilities.

---

## Features

- High-speed autonomous navigation
- PID-based steering correction
- Real-time line detection
- 8-channel IR sensor array
- Differential motor speed control
- Smooth corner handling
- Compact and low-cost design

---

## Hardware Used

- ESP32 Development Board
- RLS08 8-Channel IR Sensor Array
- L298N Motor Driver
- DC Geared Motors
- Robot Chassis
- Li-ion Battery Pack
- Buck Converter

---

## Software

- Arduino IDE
- ESP32 Board Package

---

## Pin Configuration

| Component | ESP32 Pin |
|-----------|-----------|
| ENA | GPIO 23 |
| IN1 | GPIO 18 |
| IN2 | GPIO 19 |
| IN3 | GPIO 21 |
| IN4 | GPIO 22 |
| ENB | GPIO 5 |

### RLS08 Sensor Pins

| Sensor | GPIO |
|--------|------|
| S1 | 13 |
| S2 | 12 |
| S3 | 14 |
| S4 | 27 |
| S5 | 26 |
| S6 | 25 |
| S7 | 33 |
| S8 | 32 |

---

## Working Principle

1. The RLS08 sensor array continuously scans the surface beneath the robot.
2. The ESP32 determines the line position using data from all eight sensors.
3. A PID algorithm computes the steering correction.
4. Motor speeds are adjusted through the L298N motor driver.
5. The robot follows the line smoothly while minimizing oscillations.

---

## Applications

- Robotics competitions
- Warehouse automation
- Automated Guided Vehicles (AGVs)
- Industrial material transport
- Educational robotics

---

## Achievement

🏆 **1st Place – MeshMerize (COGNITIA 2025)**

---

## Future Improvements

- Adaptive PID tuning
- Junction and intersection detection
- Obstacle avoidance
- Wireless telemetry
- Computer vision integration

---

## Author

**Gaurav Singh Rana**

B.Tech Electronics and Communication Engineering

Lovely Professional University
