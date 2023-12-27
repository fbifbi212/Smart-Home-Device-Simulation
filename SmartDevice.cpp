#include "SmartDevice.h"
#include <iostream>

SmartDevice::SmartDevice() : temperature(0), lights(false), security(false) {}

void SmartDevice::setTemperature(double temp) {
    temperature = temp;
    std::cout << "Room temperature set to: " << temperature << " degrees Celsius\n";
}

void SmartDevice::controlLights(bool state) {
    lights = state;
    if (lights)
        std::cout << "Lights turned ON.\n";
    else
        std::cout << "Lights turned OFF.\n";
}

void SmartDevice::activateSecurity(bool state) {
    security = state;
    if (security)
        std::cout << "Security system activated.\n";
    else
        std::cout << "Security system deactivated.\n";
}
