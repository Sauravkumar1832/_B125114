#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int numSubjects;
    float *marks;

public:
    // Constructor
    Student() {
        marks = nullptr;
    }

    // Accept student details
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;
    }

    // Dynamically allocate memory for marks
    void allocateMarks() {
        marks = new float[numSubjects];
    }

    // Accept marks
    void acceptMarks() {
        cout << "Enter marks for " << numSubjects << " subjects:\n";

        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Calculate total marks
    float calculateTotal() {
        float total = 0;

        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }

        return total;
    }

    // Calculate average marks
    float calculateAverage() {
        return calculateTotal() / numSubjects;
    }

    // Display complete result
    void display() {
        cout << "\n----- Student Result -----\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << numSubjects << endl;

        cout << "Marks: ";
        for (int i = 0; i < numSubjects; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << calculateTotal();
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }

    // Release dynamically allocated memory
    void freeMemory() {
        delete[] marks;
        marks = nullptr;
    }
};

int main() {
    Student s;

    // Accept student details
    s.acceptDetails();

    // Dynamically allocate marks
    s.allocateMarks();

    // Accept marks
    s.acceptMarks();

    // Display result
    s.display();

    // Release memory
    s.freeMemory();

    return 0;
}