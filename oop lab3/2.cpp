#include<iostream>
using namespace std;

int main(){
    //allocating dynamic memory
    int *arr= new int[5];

    //taking the input from the user
    cout<<"enter the elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;

    //printing the values of the array
    for(int i=0;i<5;i++){
        cout<<"value at index"<<i<<" "<<arr[i]<<endl; 
    }

    

    //deallocating dynamic memory
    delete [] arr;
    return 0;
}