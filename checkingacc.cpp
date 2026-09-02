#include <iostream>
#include <string>
using namespace std;

class CheckingAccount
{
    int acc_no;
    string acc_name;
    float balance;

public:

    void getdata()
    {
        cout << "Enter Account Number: ";
        cin >> acc_no;

        cout << "Enter Account Holder Name: ";
        cin >> acc_name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully.\n";
    }

    void withdraw()
    {
        float amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "\n----- Checking Account Details -----\n";
        cout << "Account Number : " << acc_no << endl;
        cout << "Account Name   : " << acc_name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    CheckingAccount c;

    c.getdata();
    c.deposit();
    c.withdraw();
    c.display();

    return 0;
}
