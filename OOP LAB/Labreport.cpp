#include<bits/stdc++.h>
using namespace std;

class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(string accNum, string accHolderName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    Account myAccount("123456", "Muhammad Sumon", 1000.0);
    myAccount.displayAccountInfo();
    myAccount.withdraw(200.0);
    myAccount.displayAccountInfo();
    return 0;
}

