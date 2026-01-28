#include <iostream>
using namespace std;

class Time {
public:
    int hour, min, sec;

    void getTime() {
        cin >> hour >> min >> sec;
    }

    void display() {
        cout << hour << " hours " << min << " minutes " << sec << " seconds";
    }

    Time add(Time t1, Time t2) {
        Time t;

        t.sec = t1.sec + t2.sec;
        t.min = t.sec / 60;
        t.sec = t.sec % 60;

        t.min = t.min + t1.min + t2.min;
        t.hour = t.min / 60;
        t.min = t.min % 60;

        t.hour = t.hour + t1.hour + t2.hour;

        return t;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time (hh mm ss): ";
    t1.getTime();

    cout << "Enter second time (hh mm ss): ";
    t2.getTime();

    t3 = t3.add(t1, t2);

    cout << "Sum of time = ";
    t3.display();

    return 0;
}
