#include <iostream>
using namespace std;

int linearSearch(int arr[], int target){
    int size = 6;

    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {4, 7, 2, 9, 5};
    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearch(arr, target);

    if (result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}
