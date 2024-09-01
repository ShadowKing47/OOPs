#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float img;    

public:
    // Constructor with default arguments
    Complex(float r = 0, float i = 0) : real(r), img(i) {}

    // Overloading the '+' operator to add two Complex objects
    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.img = img + other.img;
        return temp;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << img << "i" << endl;  // Corrected the output format
    }
};

int main() {
    Complex c1(3.0, 4.0);  // Creating first complex number 3 + 4i
    Complex c2(1.0, 2.0);  // Creating second complex number 1 + 2i

    Complex c3 = c1 + c2;  // Adding two complex numbers using overloaded '+'

    c3.display();  // Corrected function call to display the result

    return 0;
}

