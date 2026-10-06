#include <iostream>
using namespace std;

class InternalExam
{
public:
    void display()
    {
        cout << "Internal Exam Result" << endl;
    }
};

class ExternalExam
{
public:
    void display()
    {
        cout << "External Exam Result" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam
{
public:
    void display()
    {
        cout << "Final Result" << endl;

        InternalExam::display();
        ExternalExam::display();
    }
};

int main()
{
    FinalResult f;

    f.display();

    return 0;
}