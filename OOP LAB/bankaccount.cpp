#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;
    public:
    BankAccount(string name, string number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
    void displayAccountInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }\
};     
        int main() {
        BankAccount account("John Doe", "123456789", 1000.0);
        account.displayAccountInfo();
        account.deposit(500.0);
        account.withdraw(200.0);
        account.displayAccountInfo();
        return 0;
    }
