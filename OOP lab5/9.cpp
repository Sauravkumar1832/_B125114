#include <iostream>
using namespace std;

// Maximum between two integers
int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

// Maximum between two integer pointers
int maxValue(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

// Maximum in an integer array
int maxValue(int *arr, int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    // Two integers
    int a = 10, b = 25;
    cout << "Maximum between two integers: "
         << maxValue(a, b) << endl;

    // Two integer pointers
    int *p1 = &a;
    int *p2 = &b;

    cout << "Maximum between two pointers: "
         << maxValue(p1, p2) << endl;

    // Integer array
    int arr[] = {3, 7, 2, 9, 5, 12};
    int size = 6;

    cout << "Maximum in array: "
         << maxValue(arr, size) << endl;

    return 0;
}