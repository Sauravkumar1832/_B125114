#include <iostream>
using namespace std;

int main()
{
    int battery = 60;
    int *ptr = &battery;

    cout << "Current battery: " << *ptr << "%" << endl;

    *ptr = *ptr + 20;

    cout << "Updated battery: " << *ptr << "%" << endl;

    return 0;
}