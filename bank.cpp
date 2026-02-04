//Bank detail program using class and object

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accNo = a;
        balance = b;
    }

    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance += amt;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    void display() {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int acc;
    float bal;
    int choice;

    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    BankAccount obj(acc, bal);

    do {
        cout << "\n--- CHOICE ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: obj.deposit(); break;
            case 2: obj.withdraw(); break;
            case 3: obj.display(); break;
            case 4: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while(choice != 4);

    return 0;
}
