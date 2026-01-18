/* Reverse a signed 32-bit integer */

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int rev = 0;

        while (x != 0) {
            int n = x % 10;
            rev = rev * 10 + n;
            x = x / 10;
        }

        if (rev > INT_MAX || rev < INT_MIN)
            return 0;

        return (int)rev;
    }
};

int main() {
    Solution s;
    int x;
    cout << "Enter a number: ";
    cin >> x;        
    cout << "reverse of " << x << " is: " << s.reverse(x);
    return 0;
}
