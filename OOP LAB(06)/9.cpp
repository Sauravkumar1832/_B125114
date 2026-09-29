#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

public:
    Temperature(double c)
    {
        celsius = c;
    }

    bool operator<(Temperature t)
    {
        return celsius < t.celsius;
    }

    bool operator>(Temperature t)
    {
        return celsius > t.celsius;
    }
};

int main()
{
    Temperature t1(25);
    Temperature t2(30);

    if (t1 < t2)
    {
        cout << "First temperature is lower than second." << endl;
    }
    else if (t1 > t2)
    {
        cout << "First temperature is higher than second." << endl;
    }
    else
    {
        cout << "Both temperatures are equal." << endl;
    }

    return 0;
}