#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(Date d)
    {
        return day == d.day &&
               month == d.month &&
               year == d.year;
    }
};

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cout << "Enter Date 1 (day month year): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter Date 2 (day month year): ";
    cin >> d2 >> m2 >> y2;

    Date date1(d1, m1, y1);
    Date date2(d2, m2, y2);

    if (date1 == date2)
        cout << "Both dates are equal." << endl;
    else
        cout << "Both dates are not equal." << endl;

    return 0;
}