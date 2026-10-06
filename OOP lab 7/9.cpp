#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;

        cout << "Person constructor" << endl;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    Employee(string n, int a, int id)
        : Person(n, a)
    {
        employeeID = id;

        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee
{
private:
    double salary;

public:
    Manager(string n, int a, int id, double s)
        : Employee(n, a, id)
    {
        salary = s;

        cout << "Manager constructor" << endl;
    }

    void display()
    {
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Manager m("Saurav", 25, 1001, 50000);

    m.display();

    return 0;
}