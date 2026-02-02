/* 
   Program to calculate the difference between two dates and times
   in years, months, days, hours, minutes, and seconds.
*/

#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1, h1, min1, s1;
    int d2, m2, y2, h2, min2, s2;

    long totalSec1, totalSec2, diffSec;

    int years, months, days, hours, minutes, seconds;

    cout << "Enter first date and time (DD MM YYYY HH MM SS): ";
    cin >> d1 >> m1 >> y1 >> h1 >> min1 >> s1;

    cout << "Enter second date and time (DD MM YYYY HH MM SS): ";
    cin >> d2 >> m2 >> y2 >> h2 >> min2 >> s2;

    totalSec1 = (y1 * 365L * 24 * 3600) +
                (m1 * 30L * 24 * 3600) +
                (d1 * 24L * 3600) +
                (h1 * 3600) +
                (min1 * 60) +
                s1;

    totalSec2 = (y2 * 365L * 24 * 3600) +
                (m2 * 30L * 24 * 3600) +
                (d2 * 24L * 3600) +
                (h2 * 3600) +
                (min2 * 60) +
                s2;

    if (totalSec1 > totalSec2)
        diffSec = totalSec1 - totalSec2;
    else
        diffSec = totalSec2 - totalSec1;

    years = diffSec / (365 * 24 * 3600);
    diffSec %= (365 * 24 * 3600);

    months = diffSec / (30 * 24 * 3600);
    diffSec %= (30 * 24 * 3600);

    days = diffSec / (24 * 3600);
    diffSec %= (24 * 3600);

    hours = diffSec / 3600;
    diffSec %= 3600;

    minutes = diffSec / 60;
    seconds = diffSec % 60;

    cout << "\nDifference is:";
    cout << "\nYears   = " << years;
    cout << "\nMonths  = " << months;
    cout << "\nDays    = " << days;
    cout << "\nHours   = " << hours;
    cout << "\nMinutes = " << minutes;
    cout << "\nSeconds = " << seconds;

    return 0;
}
