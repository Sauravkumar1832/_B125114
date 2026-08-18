#include<iostream>
#include<string>
using namespace std;

class ParkingSlot{
    private:
    int slotNum;
    int vehicleNum;
    bool occupancyStatus;

    public:
    ParkingSlot(int sN,int vN,bool s){
        slotNum=sN;
        vehicleNum=vN;
        occupancyStatus=s;
    }
    friend void checkSlot(ParkingSlot p);
};

    void checkSlot(ParkingSlot p){
        cout<<"slot number:"<<p.slotNum<<endl;
        cout<<"vehicle no:"<<p.vehicleNum<<endl;
        
        if(p.occupancyStatus==true){
            cout<<"slot is occupied";
        }else{
            cout<<"slot is available";
        }
    }
    int main(){
        int slot;
        int vehicle;
        bool status;
        cout<<"enter slot no:";
        cin>>slot;
        cout<<"enter vehicle no:";
        cin>>vehicle;
        cout<<"Enter occupancy status (1 for Occupied, 0 for Available):";
        cin>>status;

        ParkingSlot p(slot,vehicle,status);

        checkSlot(p);
        return 0;
    }