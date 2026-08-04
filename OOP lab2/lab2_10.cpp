#include <iostream>
#include <string>
using namespace std;

// Class to generate electricity bill
class ElectricityBill
{
private:
    int consumerNumber;
    string consumerName;
    int units;
    float bill;

public:
    // Function to accept consumer details
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin.ignore();
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate electricity bill
    void calculateBill()
    {
        if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 200)
        {
            bill = (100 * 5) + (units - 100) * 7;
        }
        else
        {
            bill = (100 * 5) + (100 * 7)
                   + (units - 200) * 10;
        }
    }

    // Function to display complete bill
    void display()
    {
        cout << "\nElectricity Bill" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: Rs. " << bill << endl;
    }
};

int main()
{
    // Creating object of ElectricityBill class
    ElectricityBill e;

    e.input();
    e.calculateBill();
    e.display();

    return 0;
}