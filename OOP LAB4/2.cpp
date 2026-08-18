#include<iostream>
#include<string>
using namespace std;

class Mobile{
    private:
    string brand;
    string model;
    int battery;
    public:
    Mobile(string b,string m,int bp){
        brand=b;
        model=m;
        battery=bp;

    }
    friend void checkBattery( Mobile m);
};
    void checkBattery(Mobile m){
        cout<<"Brand:"<<m.brand<<endl;
        cout<<"model:"<<m.model<<endl;
        cout<<"battery percentage:"<<m.battery<<endl;
        if(m.battery<20){
            cout<<"Battery Low";
        }
        else cout<<"Battery normal";
    }
    int main(){
        Mobile m("Samsung","A36",18);

        checkBattery(m);
        return 0;

    }