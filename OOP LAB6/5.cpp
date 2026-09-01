#include <iostream>
using namespace std;

void updateStatus(int *status)
{
    if (*status == 1)
    {
        *status = 2;
    }
    else if (*status == 2)
    {
        *status = 3;
    }
}

void displayStatus(int status){
    if (status == 1)
        cout << "Processing";
    else if (status == 2)
        cout << "Shipped";
    else if (status == 3)
        cout << "Delivered";
}

int main()
{
    int status = 1;

    cout << "Before: ";
    displayStatus(status);

    updateStatus(&status);

    cout << endl << "After: ";
    displayStatus(status);

    return 0;
}