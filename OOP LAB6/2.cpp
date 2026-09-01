#include <iostream>
using namespace std;

int main()
{
    int water = 500;
    int *ptr = &water;

    cout << "Current water level: " << *ptr << " litres" << endl;

    *ptr = *ptr + 200;
    *ptr = *ptr - 100;
    cout << "Final water level: " << *ptr << " litres" << endl;
    return 0;
}