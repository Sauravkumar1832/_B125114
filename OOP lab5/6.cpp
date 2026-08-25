#include <iostream>
using namespace std;

// Display an integer
void display(int value)
{
    cout << "Integer: " << value << endl;
}

// Display a floating-point nuber
void display(double value)
{
    cout << "Floating-point: " << value << endl;
}

// Display a character
void display(char value)
{
    cout << "Character: " << value << endl;
}

// Display all elemnts of an integer array
void display(int arr[], int size)
{
    cout << "Integer array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Display all elements of a character array
void display(char arr[], int size)
{
    cout << "Character array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    // Integer
    int a = 10;
    display(a);

    // Floating-point
    double b = 12.5;
    display(b);

    // Character
    char ch = 'A';
    display(ch);

    // Integer array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);

    // Character array
    char chars[] = {'H', 'e', 'l', 'l', 'o'};
    int charSize = sizeof(chars) / sizeof(chars[0]);

    display(chars, charSize);

    return 0;
}