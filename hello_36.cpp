#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    Account(int accNum, string holder, float initBalance) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = initBalance;
    }

    virtual void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " successfully.\n";
        } else {
            cout << "Invalid amount for deposit.\n";
        }
    }

    virtual void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully.\n";
        } else {
            cout << "Invalid amount for withdrawal.\n";
        }
    }

    virtual void checkBalance() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Balance: " << balance << "\n";
    }

    virtual void displayDetails() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Balance: " << balance << "\n";
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
private:
    float interestRate;

public:
    SavingsAccount(int accNum, string holder, float initBalance, float interest)
        : Account(accNum, holder, initBalance), interestRate(interest) {}

    void deposit(float amount) override {
        amount += (amount * interestRate / 100); // Apply interest
        Account::deposit(amount);
    }

    void displayDetails() override {
        Account::displayDetails();
        cout << "Account Type: Savings\n";
    }
};

class CurrentAccount : public Account {
private:
    float overdraftLimit;

public:
    CurrentAccount(int accNum, string holder, float initBalance, float overdraft)
        : Account(accNum, holder, initBalance), overdraftLimit(overdraft) {}

    void withdraw(float amount) override {
        if (amount > (balance + overdraftLimit)) {
            cout << "Withdrawal not allowed. Overdraft limit exceeded.\n";
        } else {
            Account::withdraw(amount);
        }
    }

    void displayDetails() override {
        Account::displayDetails();
        cout << "Account Type: Current\n";
    }
};

int main() {
    int accNum;
    string holder;
    float initBalance, interest, overdraft;

    cout << "Enter account number: ";
    cin >> accNum;
    cin.ignore(); // Clear the input buffer
    cout << "Enter account holder name: ";
    getline(cin, holder);
    cout << "Enter initial balance: ";
    cin >> initBalance;

    cout << "Enter interest rate for Savings Account (%): ";
    cin >> interest;
    SavingsAccount* savingsAcc = new SavingsAccount(accNum, holder, initBalance, interest);

    cout << "Enter overdraft limit for Current Account: ";
    cin >> overdraft;
    CurrentAccount* currentAcc = new CurrentAccount(accNum, holder, initBalance, overdraft);

    // Perform operations
    float depositAmount, withdrawAmount;
    cout << "Enter deposit amount for Savings Account: ";
    cin >> depositAmount;
    savingsAcc->deposit(depositAmount);

    cout << "Enter withdrawal amount for Current Account: ";
    cin >> withdrawAmount;
    currentAcc->withdraw(withdrawAmount);

    // Display account details
    cout << "\nSavings Account Details:\n";
    savingsAcc->displayDetails();

    cout << "\nCurrent Account Details:\n";
    currentAcc->displayDetails();

    delete savingsAcc;
    delete currentAcc;

    return 0;
}