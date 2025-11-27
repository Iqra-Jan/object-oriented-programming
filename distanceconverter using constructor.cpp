#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    // Constructor 1: meters only
    Distance(int m) {
        meters = m;
        centimeters = 0;
    }

    // Constructor 2: meters and centimeters
    Distance(int m, int cm) {
        meters = m;
        centimeters = cm;
        normalize();
    }

    //  (convert 100 cm = 1 m)
    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        }
    }

    // Function to add two distances
    Distance add(Distance d) {
        Distance temp(0, 0);
        temp.meters = meters + d.meters;
        temp.centimeters = centimeters + d.centimeters;
        temp.normalize();
        return temp;
    }

    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

int main() {
    // Creating distance objects
    Distance d1(5);         
    Distance d2(3, 75);    

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    // Adding distances
    Distance d3 = d1.add(d2);

    cout << "\nTotal Distance: ";
    d3.display();

    return 0;
}
