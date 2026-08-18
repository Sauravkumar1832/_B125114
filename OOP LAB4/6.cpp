#include <iostream>
using namespace std;

class SecuritySystem;

class Door
{
private:
    int doorNumber;
    bool lockStatus;

public:
    // Constructor
    Door(int number, bool status)
    {
        doorNumber = number;
        lockStatus = status;
    }

    // Declare SecuritySystem as friend class
    friend class SecuritySystem;
};

class SecuritySystem
{
public:

    void checkLockStatus(Door d)
    {
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.lockStatus)
        {
            cout << "Door Status: Locked" << endl;
        }
        else
        {
            cout << "Door Status: Unlocked" << endl;
        }
    }
};

int main()
{
    int doorNumber;
    bool status;

    cout << "Enter Door Number: ";
    cin >> doorNumber;

    cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
    cin >> status;

    Door door(doorNumber, status);

    SecuritySystem security;

    security.checkLockStatus(door);

    return 0;
}