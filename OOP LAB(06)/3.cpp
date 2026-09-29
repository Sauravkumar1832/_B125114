#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    bool operator>(Student s)
    {
        return marks > s.marks;
    }

    string getName()
    {
        return name;
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    string name1, name2;
    int marks1, marks2;

    cout << "Enter name of student 1: ";
    cin >> name1;

    cout << "Enter marks of student 1: ";
    cin >> marks1;

    cout << "Enter name of student 2: ";
    cin >> name2;

    cout << "Enter marks of student 2: ";
    cin >> marks2;

    Student s1(name1, marks1);
    Student s2(name2, marks2);

    if (s1 > s2)
        cout << s1.getName() << " has higher marks." << endl;
    else if (s2 > s1)
        cout << s2.getName() << " has higher marks." << endl;
    else
        cout << "Both students have equal marks." << endl;

    return 0;
}