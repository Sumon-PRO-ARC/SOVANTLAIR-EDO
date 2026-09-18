#include <iostream> 
#include <string> 
using namespace std; 
class BankAccount { 
    private:   
    int accNo;    
    string holderName;    
    double balance;    
    static int totalAccounts;    
    static double interestRate; 
    public:    void openAccount(string name, double initialBalance)    
    {        
        accNo = 1001 + totalAccounts;        
        totalAccounts++;        
        holderName = name;        
        balance = initialBalance;    
    }    
    void deposit(double amount);    
    void withdraw(double amount);    
    void addInterest()    
    {        
        balance = balance + (balance * interestRate / 100);    
    }    
    void display()    
    {        
        cout << "Account No: " << accNo << endl;        
        cout << "Holder Name: " << holderName << endl;        
        cout << "Balance: " << balance << endl;        
        cout << endl;    }    static void showTotal()    
        {        
            cout << "Total Accounts: "             << totalAccounts << endl;    
        }    
        static void setRate(double rate)    
        {        
            interestRate = rate;    
        } 
    }; 
    int BankAccount::totalAccounts = 0;
    double BankAccount::interestRate = 5.0; 
    void BankAccount::deposit(double amount) {
            if (amount > 0)    
            {        
                balance = balance + amount;    
            } 
        } 
        void BankAccount::withdraw(double amount) 
        {    
            if (amount > 0 && amount <= balance)    
            {        balance = balance - amount;    
            }    
            else    {        
                cout << "Insufficient balance!" << endl;    
            } 
        } 
        int main() {
                BankAccount a, b, c;    
                BankAccount::setRate(5);    
                a.openAccount("Sumon", 10000);    
                b.openAccount("Karim", 15000);    
                c.openAccount("Rahim", 20000);    
                a.deposit(5000);    
                b.withdraw(3000);    
                c.addInterest();    
                a.display();    
                b.display();    
                c.display();    
                BankAccount::showTotal();    
                // a.balance = 99999; // Error: balance is private    
                return 0; }
