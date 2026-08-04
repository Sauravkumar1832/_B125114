#include<iostream>
#include<string>

using namespace std;

//declaring class
class BankAccount{
    //declaring variable
    private:
    int AccountNo;
    string Name;
    float balance;
    public:
    //function to take input from the user
    void input(){
        cout<<"Enter your bank account no.:";
        cin>>AccountNo;
        cout<<"Enter your name:";
        cin.ignore();
        getline(cin,Name);
        cout<<"Enter balance:";
        cin>>balance;
    }
    //function for despositing
    float deposite(){
        float amount;
        cout<<"Enter amount to deposite:";
        cin>>amount;
        balance=balance+amount;
        cout<<"Amount deposited successfully."<<endl;
    }
    //function for withdrawal
    void withdraw(){
        float amount;
        cout<<"Enter  amount to withdraw:";
        cin>>amount;
        //check if sufficent balance is available
        if(amount<=balance){
            balance=balance-amount;
            cout<<"Withdrawal successful."<<endl;
        }
        else{
            cout<<"Insufficent balance."<<endl;
        }
    }
    //function for displaying updated details
    void display(){
        cout<<"\nUpdated Account Details"<<endl;
        cout<<"Account Number:"<<AccountNo<<endl;
        cout<<"Account holder Name:"<<Name<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount b;
    //calling function to take input
    b.input();
    //calling member function for deposite
    b.deposite();
    //calling member function for withdrawal
    b.withdraw();
    //calling member function for displaying updated details
    b.display();
    return 0;
}
