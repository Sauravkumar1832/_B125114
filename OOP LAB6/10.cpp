#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    long long *contacts = new long long[n];

    cout << "Enter contact numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(contacts + i);
    }

    long long searchNumber;

    cout << "Enter contact number to search: ";
    cin >> searchNumber;

    long long *ptr = contacts;

    bool found = false;
    int position = 0;

    while (ptr < contacts + n)
    {
        if (*ptr == searchNumber)
        {
            found = true;
            break;
        }

        ptr++;
        position++;
    }

    if (found)
    {
        cout << "Contact found at position: " << position << endl;
    }
    else
    {
        cout << "Contact not found" << endl;
    }

    delete[] contacts;

    return 0;
}