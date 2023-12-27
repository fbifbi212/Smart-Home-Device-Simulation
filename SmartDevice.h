#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

class SmartDevice {
private:
    double temperature;
    bool lights;
    bool security;

public:
    SmartDevice();
    void setTemperature(double temp);
    void controlLights(bool state);
    void activateSecurity(bool state);
};

#endif // SMARTDEVICE_H
