//hybrid inheritance
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
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;
    float CGPA;

public:
    Student(string n, int a, int r, float c)
        : Person(n, a)
    {
        rollNo = r;
        CGPA = c;
    }
};

class Employee : virtual public Person
{
protected:
    int employeeID;

public:
    Employee(string n, int a, int id)
        : Person(n, a)
    {
        employeeID = id;
    }
};

class TeachingAssistant : public Student, public Employee
{
public:
    TeachingAssistant(string n, int a, int r, float c, int id)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id)
    {
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << CGPA << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

int main()
{
    TeachingAssistant ta("Saurav", 21, 101, 8.5, 5001);

    ta.display();

    return 0;
}