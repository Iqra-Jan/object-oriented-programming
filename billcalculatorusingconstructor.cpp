#include <iostream>
using namespace std;

class Bill {
private:
    int units;
    float total;

public:
    // Parameterized constructor
    Bill(int u) {
        units = u;
        total = units * 5;   // ?5 per unit
    }

    // Copy constructor
    Bill(const Bill &b) {
        units = b.units;
        total = b.total;
    }

    // Function to display bill
    void display() {
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill (?): " << total << endl;
    }
};

int main() {
    // Original object
    Bill b1(120);   // Example units
    
    cout << "Original Bill:" << endl;
    b1.display();

    // Copied object
    Bill b2(b1);   // Copy constructor called
    
    cout << "\nCopied Bill:" << endl;
    b2.display();

    return 0;
}
