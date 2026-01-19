/* A simple calculator program */

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            cout << "Divison not allowed!" << endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    Calculator calc;
    int choice, a, b;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two integers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}