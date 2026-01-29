#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string branch;

public:
    void getData() {
        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Age : ";
        cin >> age;

        cout << "Enter Branch : ";
        cin >> branch;
    }

    void displayData() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Branch : " << branch << endl;
    }
};

int main() {
    Student s;  
    s.getData();
    s.displayData();

    return 0;
}
