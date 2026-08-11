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

   //finding the largest element
   int MAX=INT16_MIN;
   for(int i=0;i<5;i++){
    if(arr[i]>MAX){
        MAX=arr[i];
    }
   }

   //displaying largest element
   cout<<"largest element:"<<MAX;
    

    //deallocating dynamic memory
    delete [] arr;
    return 0;
}