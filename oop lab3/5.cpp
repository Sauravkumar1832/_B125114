#include<iostream>
#include<string>

using namespace std;

class Student{
    
    public:
    int rollno;
    string name;
    int marks;

    //function to take user input
    void input() {
        cout << "Enter rollno: ";
        cin >> rollno;
        cout<<"enter name:";
        cin.ignore();
        getline(cin,name);
        cout<<"enter your marks:";
        cin>>marks;
    }
    //function to display output
    void display(){
        cout<<"rollno:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    //dynamically creating an object
    Student *s= new Student;
    s->input();
    s->display();
    
    delete s; 
     return 0;
    
}