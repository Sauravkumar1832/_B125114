#include <iostream>
using namespace std;

// Search for an integer in an integer array
int search(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return i;
    }

    return -1;
}

// Search for a character in a character array
int search(char arr[], int size, char value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return i;
    }

    return -1;
}

// Search for an integer within a specified range
int search(int arr[], int start, int end, int value)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == value)
            return i;
    }

    return -1;
}

int main()
{
    // Integer array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, size, 30);

    if (result != -1)
        cout << "Integer found at position: " << result << endl;
    else
        cout << "Integer not found." << endl;

    // Character array
    char chars[] = {'a', 'b', 'c', 'd', 'e'};
    int charSize = sizeof(chars) / sizeof(chars[0]);

    result = search(chars, charSize, 'd');

    if (result != -1)
        cout << "Character found at position: " << result << endl;
    else
        cout << "Character not found." << endl;

    // Search within a range
    result = search(arr, 1, 3, 40);

    if (result != -1)
        cout << "Integer found at position: " << result << endl;
    else
        cout << "Integer not found in the range." << endl;

    return 0;
}