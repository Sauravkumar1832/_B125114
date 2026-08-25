#include <iostream>
using namespace std;

// Total of an integer array
int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

// Total of a floating-point array
double total(double arr[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

// Total of a portion of an integer array
int total(int arr[], int size, int elements)
{
    int sum = 0;

    for (int i = 0; i < elements; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    // Integer array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Total of integer array: "
         << total(arr, size) << endl;

    // Floating-point array
    double farr[] = {1.5, 2.5, 3.5, 4.5};
    int fsize = sizeof(farr) / sizeof(farr[0]);

    cout << "Total of floating-point array: "
         << total(farr, fsize) << endl;

    // Portion of integer array
    cout << "Total of first 3 elements: "
         << total(arr, size, 3) << endl;

    return 0;
}