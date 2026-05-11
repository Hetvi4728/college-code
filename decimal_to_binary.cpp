#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary, i = 0;

    if (num == 0) {
        cout << "Binary: 0";
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    return 0;
}
