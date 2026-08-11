#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float *monthlyEarnings;

    int months;

public:
    // Constructor
    Employee() {
        monthlyEarnings = nullptr;
    }

    // Accept employee details
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;
    }

    // Dynamically allocate memory
    void allocateMemory() {
        monthlyEarnings = new float[months];
    }

    // Accept monthly earnings
    void acceptEarnings() {
        cout << "\nEnter monthly earnings:\n";

        for (int i = 0; i < months; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    // Calculate total earnings
    float calculateTotal() {
        float total = 0;

        for (int i = 0; i < months; i++) {
            total += monthlyEarnings[i];
        }

        return total;
    }

    // Calculate average monthly earning
    float calculateAverage() {
        return calculateTotal() / months;
    }

    // Find month with highest earning
    int highestEarningMonth() {
        int highest = 0;

        for (int i = 1; i < months; i++) {
            if (monthlyEarnings[i] > monthlyEarnings[highest]) {
                highest = i;
            }
        }

        return highest;
    }

    // Display complete analysis
    void display() {
        cout << "\n--------- Employee Salary Analysis ---------\n";

        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:\n";

        for (int i = 0; i < months; i++) {
            cout << "Month " << i + 1 << ": "
                 << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings: "
             << calculateTotal() << endl;

        cout << "Average Monthly Earning: "
             << calculateAverage() << endl;

        cout << "Highest Earning: "
             << monthlyEarnings[highestEarningMonth()] << endl;

        cout << "Highest Earning Month: "
             << highestEarningMonth() + 1 << endl;
    }

    // Release dynamically allocated memory
    void freeMemory() {
        delete[] monthlyEarnings;
        monthlyEarnings = nullptr;
    }
};

int main() {

    Employee e;

    // Accept employee details
    e.acceptDetails();

    // Dynamically allocate memory for months
    e.allocateMemory();

    // Accept monthly earnings
    e.acceptEarnings();

    // Display complete analysis
    e.display();

    // Release memory
    e.freeMemory();

    return 0;
}