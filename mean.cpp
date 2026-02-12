#include <iostream>
using namespace std;

class Sample {
    int a, b;

public:
    void input() {
        cout << "Enter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;
    }

    friend float calculateMean(Sample obj);
};

float calculateMean(Sample obj) {
    return (obj.a + obj.b) / 2.0;
}

int main() {
    Sample s;
    s.input();

    cout << "Mean = " << calculateMean(s);

    return 0;
}
