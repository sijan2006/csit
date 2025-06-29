/**
 * 3. DefineaclassACCOUNTwithfollowingspecifications: a. Data Members
i. Name of the depositor
ii. Account number
iii. Balance amount in the account
b. MemberFunction
i. To assign initial values(define inside the class definition)
ii. To deposit an amount(define outside the class definition)
iii. To withdraw an amount after checking the balance.
iv. To display name, account number and balance.
*/
#include <iostream>
#include <string>
using namespace std;

class ACCOUNT
{
private:
    string name;
    int acc_no;
    float balance;

public:
    void setdata()
    {
        cout << "Enter name, account number, and initial balance: ";
        cin >> name >> acc_no >> balance;
    }

    void deposit(float amount);

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

void ACCOUNT::deposit(float amount)
{
    balance += amount;
    cout << "Deposit successful." << endl;
}

int main()
{
    ACCOUNT acc;
    acc.setdata();
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    return 0;
}
