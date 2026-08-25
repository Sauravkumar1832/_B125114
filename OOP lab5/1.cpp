#include<iostream>
using namespace std;

class Calculator{
    public: 
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    float add(float a,float b){
        return a+b;
    }
};
int main(){
    Calculator c;
    int a,b;
    cout<<"enter two integers:";
    cin>>a;
    cin>>b;
    cout<<"addition of two integers:"<<c.add(a,b);
    cout<<endl;

    
    int x,y,z;
    cout<<"enter three integers:";
    cin>> x >> y >>z;
    cout<<"addition of three integers:"<<c.add(x,y,z);
    cout<<endl;

    float p,q;
    cout<<"enter three float:";
    cin>>p>>q;
     cout<<"addition of two float:"<<c.add(p,q);

     cout<<endl;
     return 0;
    

    

}