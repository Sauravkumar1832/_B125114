#include<iostream>
#include<string>
using namespace std;

//class to store student info
class Student{
    //declaring variable
    private:
    int roll;
    string name;
    float marks;

    public:
    //function to take details of student as input
    void input(){
        cout<<"enter roll no.:";
        cin>>roll;
        cout<<"enter Name:";
        cin.ignore();   // clears input buffer
        getline(cin,name);  //takes full name including space
        cout<<"enter marks:";
        cin>>marks;
    }

    //function to display the students detail
    void display(){
        cout<<"\nStudent details"<<endl;
        cout<<"rollno.:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    //creating object of student class
    Student s;

    //calling member function to take input 
    s.input();
    //calling member function to display details
    s.display();
    return 0;

}