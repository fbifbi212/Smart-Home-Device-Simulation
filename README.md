# Smart Home Device Simulation

This project simulates a basic smart home device to demonstrate an embedded system's functionality within a home automation context.

## Description

The project comprises the following files:

- **main.cpp:** Entry point demonstrating the functionality of the SmartDevice class.
- **SmartDevice.h:** Header file containing the declaration of the SmartDevice class.
- **SmartDevice.cpp:** Implementation file with the details of the SmartDevice class.

## SmartDevice Class

The `SmartDevice` class emulates a smart home device that can be controlled and monitored through various functionalities.

### Features

- **Temperature Control:** Adjusts the room temperature based on user input.
- **Light Control:** Controls the lights within the simulated environment.
- **Security:** Simulates basic security functionalities.

### Usage

1. Clone this repository.
2. Compile the C++ files using your preferred compiler.
3. Run the executable to observe the smart home device simulation.

## Usage Example

The provided `main.cpp` file demonstrates how to create a SmartDevice object and utilize its functionalities.

```cpp
#include <iostream>
#include "SmartDevice.h"

int main() {
    SmartDevice device;

    device.setTemperature(22.0);
    device.controlLights(true);
    device.activateSecurity(true);

    return 0;
}
