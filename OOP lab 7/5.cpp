#include <iostream>
using namespace std;

class Academic
{
protected:
    int marks1;
    int marks2;
    int marks3;

public:
    Academic(int m1, int m2, int m3)
    {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    Sports(int marks)
    {
        sportsMarks = marks;
    }
};

class StudentResult : public Academic, public Sports
{
public:
    StudentResult(int m1, int m2, int m3, int sm)
        : Academic(m1, m2, m3), Sports(sm)
    {
    }

    void displayResult()
    {
        int academicMarks = marks1 + marks2 + marks3;

        int total = academicMarks + sportsMarks;

        double average = total / 4.0;

        cout << "Academic Marks: " << academicMarks << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main()
{
    StudentResult s(80, 75, 85, 90);

    s.displayResult();

    return 0;
} 