#include <iostream>
#include <string>
using namespace std;

// Class to manage library book transactions
class LibraryBook
{
private:
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    float fine;

public:
    // Function to enter book and student details
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, bookTitle);

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Number of Days Book was Issued: ";
        cin >> daysIssued;
    }

    // Function to calculate fine
    void calculateFine()
    {
        if (daysIssued > 15)
        {
            fine = (daysIssued - 15) * 2;
        }
        else
        {
            fine = 0;
        }
    }

    // Function to display all transaction details
    void display()
    {
        cout << "\nLibrary Transaction Details" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Number of Days Issued: " << daysIssued << endl;
        cout << "Fine: Rs. " << fine << endl;
    }
};

int main()
{
    // Creating object of LibraryBook class
    LibraryBook b;

    b.input();
    b.calculateFine();
    b.display();

    return 0;
}