#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nAll Subarrays are:\n";

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {

            cout << "[ ";
            for(int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}
