#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int a = 0) {
        x = a;
    }

    void operator = (Demo d) {
        x = d.x;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d1(20), d2(50);

    cout << "Before assignment:" << endl;
    d1.display();
    d2.display();

    d1 = d2;

    cout << "After assignment:" << endl;
    d1.display();
    d2.display();

    return 0;
}
