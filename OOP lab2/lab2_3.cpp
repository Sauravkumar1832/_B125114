#include<iostream>
using namespace std;

//declaring class
class Calculator{
    private:
    //declaring variable
    float n1;
    float n2;
    public:
    //function to take input
    void input(){
        cout<<"enter first no.:";
        cin>>n1;
        cout<<"enter second no.";
        cin>>n2;
    }
    //fuction for addition 
    float addition(){
        return n1+n2;
    }
    //function for subtraction 
    float subtraction(){
        return n1-n2;
    }
    //function for multiplication
    float multiplication(){
        return n1*n2;
    }
    //function for division
    float division(){
        if(n2!=0){
        return n1/n2;
        }else 
        cout<<"division not possible";
        return 0;
    }
    void display(){
        cout<<"addtion:"<<addition()<<endl;
        cout<<"subtraction:"<<subtraction()<<endl;
        cout<<"multiplication:"<<multiplication()<<endl;
        if(n2!=0){
            cout<<"division:"<<division()<<endl;
        }else{
            division();
        }
    }
};
int main(){
    Calculator c;
    
    //calling member function to take input
    c.input();
    //calling member function to display calculations
    c.display();
}