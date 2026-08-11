#include<iostream>
using namespace std;

int main(){
    //allocating dynamic memory
    int *a= new int(80);

    cout<<"value:"<<*a;

    //deallocating dynamic memory
    delete a;
    return 0;
}