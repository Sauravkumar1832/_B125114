#include <iostream>
using namespace std;

int main()
{
    int seats[8] = {11, 12, 13, 14, 15, 16, 17, 18};

    int position, newSeat;

    cout << "Enter position: ";
    cin >> position;

    cout << "Enter correct seat number: ";
    cin >> newSeat;

    cout << "Before correction: ";

    for (int i = 0; i < 8; i++)
    {
        cout << *(seats + i) << " ";
    }

    cout << endl;

    *(seats + position) = newSeat;

    cout << "After correction: ";

    for (int i = 0; i < 8; i++)
    {
        cout << *(seats + i) << " ";
    }

    return 0;
}