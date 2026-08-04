#include <iostream>
#include <string>
using namespace std;

// Class to process student result
class StudentResult
{
private:
    string name;
    int rollNumber;
    float marks[5];
    float total, percentage;
    char grade;

public:
    // Function to accept student details
    void input()
    {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks of 5 subjects: " << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Function to calculate total marks and percentage
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        // Total maximum marks = 500
        percentage = (total / 500) * 100;
    }

    // Function to assign grade
    void assignGrade()
    {
        if (percentage >= 90)
            grade = 'A';

        else if (percentage >= 80)
            grade = 'B';

        else if (percentage >= 70)
            grade = 'C';

        else if (percentage >= 60)
            grade = 'D';

        else
            grade = 'F';
    }

    // Function to display complete result
    void display()
    {
        cout << "\nStudent Result" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    // Creating object of StudentResult class
    StudentResult s;

    s.input();
    s.calculate();
    s.assignGrade();
    s.display();

    return 0;
}