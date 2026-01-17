/*Find largest number using function*/
#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    int a, b, c;
    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;

    int largest = findLargest(a, b, c);
    cout << "Largest number is: " << largest << endl;
    return 0;
}