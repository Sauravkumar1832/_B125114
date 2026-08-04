#include<iostream>
using namespace std;

//declaring class to find area and perimeter
class Rectangle{
    private:
    //declaring variables
    int length;
    int breadth;
    int area;
    int perimeter;
    
    public:
    //function to take dimention of rectangle
    void input(){
        cout<<"enter the length and breadth of rectangle:";
        cin>>length;
        cin>>breadth; 
    }
    //function to calculate area
    void Rarea(){
        area=length*breadth;
    }
    //function to calculate perimeter
    void Rperimeter(){
        perimeter=2*(length+breadth);
    }
    //function to display the details of rectangle
    void display(){
        cout<<"area:"<<area<<endl;
        cout<<"perimeter:"<<perimeter<<endl;
    }
};
int main(){
    //declaring object of rectangle class
    Rectangle r;

    //calling member function to take input
    r.input();

    //calling member function to calculate area
    r.Rarea();
    //calling member function to calculate perimeter
    r.Rperimeter();
    //calling member function to display details
    r.display();
    return 0;
}