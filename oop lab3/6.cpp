#include <iostream>
#include <string>

using namespace std;

class Employee
{

public:
    int employeeID;
    string name;
    int salary;

    // function to take user input
    void input()
    {
        cout << "Enter employee id: ";
        cin >> employeeID;
        cout << "enter name:";
        cin.ignore();
        getline(cin, name);
        cout << "enter your salary:";
        cin >> salary;
    }
    // function to display output
    void display()
    {
        cout << "rollno:" << employeeID << endl;
        cout << "name:" << name << endl;
        cout << "marks:" << salary << endl;
    }
};
int main()
{
    int n;
    cout << "enter the no of enployee:";
    cin >> n;
    // dynamically creating an object
    Employee *emp = new Employee[n];

    // taking input of all the employee
    for (int i = 0; i < n; i++)
    {
        cout << "enter details of employee" << i + 1 << endl;
        emp[i].input();
    }

    // displaying the details
    cout << "---details---";
    for (int i = 0; i < n; i++)
    {
        cout << "\nemployee" << i + 1 << endl;
        emp[i].display();
    }

    // free dynamically allocated MEMORY
    delete[] emp;
    return 0;
}