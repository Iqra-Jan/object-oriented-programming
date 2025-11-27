#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor (one parameter -> square)
    Rectangle(float side) {
        length = width = side;
    }

    // Parameterized constructor (two parameters -> rectangle)
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    float area() {
        return length * width;
    }

    // Function to calculate perimeter
    float perimeter() {
        return 2 * (length + width);
    }

    // Function to display results
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

int main() {
    // Using default constructor
    Rectangle r1;
    cout << "\nUsing Default Constructor:\n";
    r1.display();

    // Using single parameter constructor (square)
    Rectangle r2(5);
    cout << "\nUsing One-Parameter Constructor (Square):\n";
    r2.display();

    // Using two-parameter constructor (rectangle)
    Rectangle r3(4, 6);
    cout << "\nUsing Two-Parameter Constructor (Rectangle):\n";
    r3.display();

    return 0;
}
