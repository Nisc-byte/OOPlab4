#include <iostream>
#include <string>
using namespace std;


class Account {
protected:
    string customer_name;
    int account_number;
    string account_type;

public:
    void readAccountInfo() {
        cout << "Enter customer name: ";
        getline(cin, customer_name);
        cout << "Enter account number: ";
        cin >> account_number;
        cin.ignore();
        cout << "Enter account type (Saving/Current): ";
        getline(cin, account_type);
    }

    void displayAccountInfo() {
        cout << "\nCustomer Name: " << customer_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
    }
};

class Saving_Account : public Account {
private:
    float balance;

public:
    Saving_Account() {
        balance = 0;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display_balance() {
        displayAccountInfo();
        cout << "Saving Account Balance: " << balance << endl;
    }
};

class Current_Account : public Account {
private:
    float balance;

public:
    Current_Account() {
        balance = 0;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display_balance() {
        displayAccountInfo();
        cout << "Current Account Balance: " << balance << endl;
    }
};

int main() {
    int choice;
    cout << "Choose account type:\n1. Saving Account\n2. Current Account\nChoice: ";
    cin >> choice;
    cin.ignore(); 
    if (choice == 1) {
        Saving_Account sa;
        sa.readAccountInfo();

        sa.deposit(1000); 
        sa.withdraw(300);
        sa.display_balance();
    }
    else if (choice == 2) {
        Current_Account ca;
        ca.readAccountInfo();

        ca.deposit(2000); 
        ca.withdraw(500); 
        ca.display_balance();
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

