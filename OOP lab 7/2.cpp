#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
    int totalMarks;

public:
    Student(string n, int r, int marks)
    {
        name = n;
        rollNo = r;
        totalMarks = marks;
    }

    virtual void calculateResult()
    {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

class RegularStudent : public Student
{
public:
    RegularStudent(string n, int r, int marks)
        : Student(n, r, marks)
    {
    }

    void calculateResult() override
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Final Result: " << totalMarks << endl;
    }
};

class ScholarshipStudent : public Student
{
public:
    ScholarshipStudent(string n, int r, int marks)
        : Student(n, r, marks)
    {
    }

    void calculateResult() override
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Final Result: " << totalMarks + 5 << endl;
    }
};

int main()
{
    RegularStudent s1("Rahul", 101, 75);
    ScholarshipStudent s2("Amit", 102, 75);

    cout << "Regular Student" << endl;
    s1.calculateResult();

    cout << endl;

    cout << "Scholarship Student" << endl;
    s2.calculateResult();

    return 0;
}