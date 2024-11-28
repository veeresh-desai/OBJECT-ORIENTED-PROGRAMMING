#include <iostream>
using namespace std;

class Account {
public:
    int customerID;
    Account(int id) : customerID(id) {}
};

class FD : virtual public Account {
protected:
    int fdID;
    int deposit;
    float interestRate;
    int months;

public:
    FD(int id, int fdid, int dep, float rate, int m)
        : Account(id), fdID(fdid), deposit(dep), interestRate(rate), months(m) {}

    int getMaturityAmount() {
        return (deposit * interestRate * months) / 100;
    }

    int getDeposit() {
        return deposit;
    }
};

class Savings : virtual public Account {
protected:
    int accountNumber;
    int balance;

public:
    Savings(int id, int accNum, int bal)
        : Account(id), accountNumber(accNum), balance(bal) {}

    void depositMoney(int amount) {
        balance += amount;
    }

    void withdrawMoney(int amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

class Report : public FD, public Savings {
public:
    Report(int id, int fdid, int dep, float rate, int m, int accNum, int bal)
        : Account(id), FD(id, fdid, dep, rate, m), Savings(id, accNum, bal) {}

    void display() {
        cout<<"Customer Data"<<endl;
        cout << "Customer ID: " << customerID << endl;
        cout << "Maturity Amount for the FD is : " << getMaturityAmount() << endl;
        cout << "Balance in the Savings is: " << balance << endl;
        cout << "Withdrawable Account Balance for the customer : " << getBalance() + getDeposit() << endl;
    }
};

int main() {
    int customerID, fdID, fdDeposit, fdMonths, savingsAccNum, initialBalance, depositAmountSavings, withdrawAmountSavings;
    float fdInterestRate;
    
    cin >> customerID >> fdID >> fdDeposit >> fdInterestRate >> fdMonths >> savingsAccNum >> initialBalance >> depositAmountSavings >> withdrawAmountSavings;

    Report report(customerID, fdID, fdDeposit, fdInterestRate, fdMonths, savingsAccNum, initialBalance);

    // Initial display
    report.display();
    cout << endl;

    // Deposit to savings account
    report.depositMoney(depositAmountSavings);
    report.display();
    cout << endl;

    // Withdraw from savings account
    report.withdrawMoney(withdrawAmountSavings);
    report.display();
    cout << endl;

    return 0;
}