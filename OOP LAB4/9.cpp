#include <iostream>
#include <string>
using namespace std;

class Exam
{
private:
    string studentName;
    string subject;
    float marks;
    float maximumMarks;

public:
    // Constructor
    Exam(string name, string sub, float m, float max)
    {
        studentName = name;
        subject = sub;
        marks = m;
        maximumMarks = max;
    }

    // Declare Result as a friend class
    friend class Result;
};

class Result
{
public:

    // Calculate percentage
    float calculatePercentage(Exam &e)
    {
        return (e.marks / e.maximumMarks) * 100;
    }

    // Display Pass or Fail
    void displayResult(Exam &e)
    {
        float percentage = calculatePercentage(e);

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }

    // Display complete result
    void displayCompleteResult(Exam &e)
    {
        float percentage = calculatePercentage(e);

        cout << "\n----- Exam Result -----" << endl;
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maximumMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    string name;
    string subject;
    float marks;
    float maximumMarks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter subject: ";
    getline(cin, subject);

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter maximum marks: ";
    cin >> maximumMarks;

    Exam e(name, subject, marks, maximumMarks);

    Result r;

    r.displayResult(e);

    r.displayCompleteResult(e);

    return 0;
}