#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
    }

    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n====== Bank Management System ======\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}
