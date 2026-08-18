#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    // Constructor
    SmartDevice(string name, string type, bool status)
    {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    // Declare HomeController as friend class
    friend class HomeController;
};

class HomeController
{
public:

    // Display device information
    void displayDeviceInfo(SmartDevice &d)
    {
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
        cout << "Power Status: ";

        if (d.powerStatus)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
    }

    // Turn device ON
    void turnOn(SmartDevice &d)
    {
        d.powerStatus = true;
        cout << "Device turned ON." << endl;
    }

    // Turn device OFF
    void turnOff(SmartDevice &d)
    {
        d.powerStatus = false;
        cout << "Device turned OFF." << endl;
    }

    // Display current power status
    void displayPowerStatus(SmartDevice &d)
    {
        cout << "Current Power Status: ";

        if (d.powerStatus)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
    }
};

int main()
{
    // Initially device is OFF
    SmartDevice device("AC", "Air Conditioner", false);

    HomeController controller;

    cout << "Initial Device Information:" << endl;
    controller.displayDeviceInfo(device);

    cout << "\nTurning device ON..." << endl;
    controller.turnOn(device);

    controller.displayPowerStatus(device);

    cout << "\nTurning device OFF..." << endl;
    controller.turnOff(device);

    controller.displayPowerStatus(device);

    return 0;
}