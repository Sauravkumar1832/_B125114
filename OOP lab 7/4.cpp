#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double bal)
    {
        accountNumber = accNo;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : BankAccount(accNo, bal)
    {
        interestRate = rate;
    }

    void displayBalance()
    {
        double interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount
{
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(int accNo, double bal, double minBal, double charge)
        : BankAccount(accNo, bal)
    {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void displayBalance()
    {
        if (balance < minimumBalance)
        {
            balance = balance - maintenanceCharge;
        }

        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s(101, 10000, 5);

    CurrentAccount c(102, 8000, 10000, 500);

    s.displayBalance();

    cout << endl;

    c.displayBalance();

    return 0;
}