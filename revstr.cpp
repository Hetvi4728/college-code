/*Reverse a string*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length() / 2; i++) {
        swap(str[i], str[str.length() - 1 - i]);
    }
    cout << "Reversed string: " << str << endl;
    return 0;
}