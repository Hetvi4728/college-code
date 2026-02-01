//calculate age difference

#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    int totalDays1, totalDays2;
    int diffDays, diffMonths, diffYears;

    cout << "Enter DOB of first person (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter DOB of second person (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    totalDays1 = y1 * 365 + m1 * 30 + d1;
    totalDays2 = y2 * 365 + m2 * 30 + d2;

    if (totalDays1 > totalDays2)
        diffDays = totalDays1 - totalDays2;
    else
        diffDays = totalDays2 - totalDays1;

    diffYears = diffDays / 365;
    diffMonths = diffDays / 30;

    cout << "\nAge Difference:";
    cout << "\nIn Days   = " << diffDays;
    cout << "\nIn Months = " << diffMonths;
    cout << "\nIn Years  = " << diffYears;

    return 0;
}

