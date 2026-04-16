# Arduino Uno Sensor and Component Projects

A repository containing **Arduino Uno code examples** for working with common sensors, actuators, and electronic components.

This project focuses on practical beginner-to-intermediate embedded systems programming using the **Arduino Uno**, demonstrating how to interface hardware, read sensors, and control outputs.

---

## Overview

The repository includes example programs for using popular Arduino modules and components often found in starter kits or educational projects.

Contents may include:

- Sensor reading examples
- Component control code
- Embedded programming exercises
- Basic automation projects
- Wiring practice projects
- Learning material for Arduino beginners

---

## Hardware Used

- **Arduino Uno**
- Breadboard
- Jumper wires
- Resistors
- Common sensor modules

---

## Components and Sensors Covered

Depending on repository contents, examples may include:

### Sensors
- Ultrasonic distance sensor (HC-SR04)
- Temperature / humidity sensor (DHT11 / DHT22)
- Light sensor (LDR)
- Motion sensor (PIR)
- Sound sensor
- IR sensor

### Outputs / Actuators
- LEDs
- RGB LEDs
- Buzzer
- Servo motor
- DC motor basics
- Relay modules

### Displays
- 7-segment display
- LCD display
- Serial monitor output

---

## Skills Demonstrated

- Embedded systems basics
- C / C++ programming for microcontrollers
- Digital input/output
- Analog sensor reading
- PWM control
- Timing with `millis()`
- Serial communication
- Hardware interfacing
- Basic debugging

---

## Example Code

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);
}

void loop() {
  myServo.write(0);
  delay(1000);

  myServo.write(90);
  delay(1000);

  myServo.write(180);
  delay(1000);
}
