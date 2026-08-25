#include <iostream>
using namespace std;

// Count number of digits in an integer
int count(int n)
{
    int digits = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digits++;
        n = n / 10;
    }

    return digits;
}

// Count number of elements in an integer array
int count(int arr[],int size)
{
    return size;
}

// Count occurrences of a character
int count(char arr[], int size, char ch)
{
    int occurrences = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    // Count digits in an integer
    int num = 12345;

    cout << "Number of digits: "
         << count(num) << endl;

    // Count elements in an integer array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of elements: "
         << count(arr,size) << endl;

    // Count character occurrences
    char chars[] = {'a', 'b', 'a', 'c', 'a', 'd'};
    int charSize = 6;
    char ch = 'a';

    cout << "Occurrences of '" << ch << "': "
         << count(chars, charSize, ch) << endl;

    return 0;
}