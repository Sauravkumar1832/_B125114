#include <iostream>
using namespace std;

// Add a value to an integer
int modify(int value, int add)
{
    return value + add;
}

// Add a value to a floating-point number
double modify(double value, double add)
{
    return value + add;
}

// Modify an integer using its pointer
void modify(int *value, int add)
{
    *value = *value + add;
}

int main()
{
    // 1. Integer
    int a = 10;

    cout << "Integer before: " << a << endl;
    cout << "Integer after: " << modify(a, 5) << endl;

    // 2. Floating-point number
    double b = 10.5;

    cout << "Float before: " << b << endl;
    cout << "Float after: " << modify(b, 2.5) << endl;

    // 3. Integer using pointer
    int c = 20;

    cout << "Pointer value before: " << c << endl;

    modify(&c, 10);

    cout << "Pointer value after: " << c << endl;

    return 0;
}