#include <iostream>
using namespace std;

int main() {
    int n;
    int product = 1;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    cout << "Multiplication of array elements = " << product;

    return 0;
}
