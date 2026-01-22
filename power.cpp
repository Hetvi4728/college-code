/* A recursive function to calculate the power of a number */

#include<iostream>
using namespace std;

double power(int n , int m) 
{
    int result = 1;
    for (int i = 1; i <= m; i++) 
    {
        result = result * n;
    }
    return result;
}

int main() 
{
    int base, exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    if (exponent < 0) 
    {
        cout << "Exponent should be a non-negative integer." << endl;
    } 
    else 
    {
        double result = power(base, exponent);
        cout << base << " raised to the power of " << exponent << " = " << result << endl;
    }

    return 0;
}