#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m = 0) {
        marks = m;
    }

    void operator > (Student s) {
        if(marks > s.marks)
            cout << "First student has more marks" << endl;
        else
            cout << "Second student has more marks" << endl;
    }

    void operator == (Student s) {
        if(marks == s.marks)
            cout << "Both students have equal marks" << endl;
        else
            cout << "Students have different marks" << endl;
    }
};

int main() {
    Student s1(85), s2(92), s3(85);

    s1 > s2;  
    s1 == s3;

    return 0;
}
