// Friend Classes & Member Friend Functions in C++

#include <iostream>
using namespace std;

// Forward declaration of Complex so calculator knows it exists
class Complex;

class calculator {
public:
    int sumrealcomplex(Complex o1, Complex o2);
};

class Complex {
    int a, b;
    // Changed lowercase 'complex' to capitalized 'Complex' here:
    friend int calculator::sumrealcomplex(Complex o1, Complex o2);
public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Changed lowercase 'complex' to capitalized 'Complex' here too:
int calculator::sumrealcomplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int main() {
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 6);

    calculator calc;
    cout << "Sum of real parts is " << calc.sumrealcomplex(c1, c2) << endl;

    return 0;
}
