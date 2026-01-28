#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    float m1, m2, m3, total, percentage;

    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter marks of 3 subjects(out of 100): ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percentage = total / 3;
    }

    void display() {
        cout << "\nRoll Number: " << roll;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main() {
    Student s;

    s.getData();
    s.calculate();
    s.display();

    return 0;
}
