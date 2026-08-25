#include <iostream>
using namespace std;

// Compare two integers
int compare(int a, int b)
{
    return (a > b) ? a : b;
}

// Compare two floating-point numbers
double compare(double a, double b)
{
    return (a > b) ? a : b;
}

// Compare two integer arrays
bool compare(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main()
{
    // Two integers
    int a = 10, b = 25;

    cout << "Larger integer: "
         << compare(a, b) << endl;

    // Two floating-point numbers
    double x = 12.5, y = 8.5;

    cout << "Larger floating-point number: "
         << compare(x, y) << endl;

    // Two integer arrays
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};

    int size = 4;

    if (compare(arr1, arr2, size))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are not identical." << endl;

    return 0;
}