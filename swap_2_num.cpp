#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // 1. logic 
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // 2. logic 2 

    // a=a^b;
    // b=a^b;
    // a=a^b;

    // 3. logic 3 (using multiplclonrication and division)
    // a = a * b; // a now becomes 20
    // b = a / b; // b becomes 10
    // a = a / b; // a becomes 20

    // 4. logic 4 (using a temporary variable)
    // int temp = a;
    // a = b;
    // b = temp;



    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}