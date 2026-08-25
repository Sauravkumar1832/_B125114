#include <iostream>
using namespace std;

// Find larger of two integers
int maxValue(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Find larger of two floating-point numbers
double maxValue(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Find largest of three integers
int maxValue(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    // Two integers
    int a = 10;
    int b = 25;

    cout << "Larger of two integers: "
         << maxValue(a, b) << endl;

    // Two floating-point numbers
    double x = 12.5;
    double y = 8.5;

    cout << "Larger of two floating-point numbers: "
         << maxValue(x, y) << endl;

    // Three integers
    int p = 15;
    int q = 30;
    int r = 20;

    cout << "Largest of three integers: "
         << maxValue(p, q, r) << endl;

    return 0;
}