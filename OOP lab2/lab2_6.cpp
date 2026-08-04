#include <iostream>
using namespace std;

// Class to store and add distances
class Distance
{
private:
    int feet, inches;

public:
    // Function to input two distances
    void input()
    {
        int feet1, inches1, feet2, inches2;

        cout << "Enter first distance:" << endl;
        cout << "Feet: ";
        cin >> feet1;
        cout << "Inches: ";
        cin >> inches1;

        cout << "Enter second distance:" << endl;
        cout << "Feet: ";
        cin >> feet2;
        cout << "Inches: ";
        cin >> inches2;

        // Adding the two distances
        feet = feet1 + feet2;
        inches = inches1 + inches2;
    }

    // Function to convert inches into feet
    void add()
    {
        if (inches >= 12)
        {
            feet = feet + inches / 12;
            inches = inches % 12;
        }
    }

    // Function to display final distance
    void display()
    {
        cout << "Final Distance: "
             << feet << " ft " << inches << " in" << endl;
    }
};

int main()
{
    // Creating object of Distance class
    Distance d;

    d.input();
    d.add();
    d.display();

    return 0;
}