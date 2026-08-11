#include<iostream>
using namespace std;

int main(){
    //allocating dynamic memory
    float *arr= new float[5];

    //taking the input from the user
    cout<<"enter the elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;

    //finding sum and average
    float sum=0,average=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    average=sum/5;
    cout<<"sum:"<<sum<<endl;
    cout<<"average:"<<average<<endl;

    

    //deallocating dynamic memory
    delete [] arr;
    return 0;
}