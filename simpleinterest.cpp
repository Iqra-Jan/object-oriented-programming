#include <iostream>
using namespace std;

class Interest {
    float principal, rate, time;

public:
    // Parameterized Constructor
    Interest(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    // Function to calculate and display Simple Interest
    void calculate() {
        float si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
    }
};

int main() {
    float p, r, t;

    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Rate: ";
    cin >> r;
    cout << "Enter Time: ";
    cin >> t;

    Interest obj(p, r, t);   // object created with parameterized constructor
    obj.calculate();         // calling function

    return 0;
}
