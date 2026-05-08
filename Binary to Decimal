#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary, decimal = 0, rem, i = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }

    cout << "Decimal number = " << decimal;

    return 0;
}
