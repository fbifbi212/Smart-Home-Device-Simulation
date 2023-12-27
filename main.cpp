#include <iostream>
#include "SmartDevice.h"

int main() {
    SmartDevice device;

    device.setTemperature(22.0);
    device.controlLights(true);
    device.activateSecurity(true);

    return 0;
}
