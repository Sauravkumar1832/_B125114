#include <iostream>
using namespace std;

// Two integers -> sum
int process(int a, int b)
{
    return a + b;
}

// Integer and floating-point -> sum
double process(int a, double b)
{
    return a + b;
}

// Two floating-point values -> product
double process(double a, double b)
{
    return a * b;
}

// Integer array and size -> average
double process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return (double)sum / size;
}

// Two integer pointers -> difference
int process(int *a, int *b)
{
    return *a - *b;
}

int main()
{
    // Two integers
    cout << "Sum of two integers: "
         << process(10, 20) << endl;

    // Integer and floating point
    cout << "Sum of integer and float: "
         << process(10, 2.5) << endl;

    // Two floating point values
    cout << "Product of two floats: "
         << process(2.5, 4.0) << endl;

    // Integer array
    int arr[] = {10, 20, 30, 40};
    int size = 4;

    cout << "Average of array: "
         << process(arr, size) << endl;

    // Two integer pointers
    int a = 30;
    int b = 10;

    cout << "Difference of two pointers: "
         << process(&a, &b) << endl;

    return 0;
}