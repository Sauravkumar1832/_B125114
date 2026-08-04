#include <iostream>
#include <string>
using namespace std;

// Class to store employee information
class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float HRA, DA, grossSalary;

public:
    // Function to accept employee details
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, employeeName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate salary
    void calculateSalary()
    {
        HRA = 0.20 * basicSalary;
        DA = 0.10 * basicSalary;
        grossSalary = basicSalary + HRA + DA;
    }

    // Function to display salary details
    void display()
    {
        cout << "\nEmployee Salary Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    // Creating object of Employee class
    Employee e;

    e.input();
    e.calculateSalary();
    e.display();

    return 0;
}