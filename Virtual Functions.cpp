#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    // Override the base class function
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr;   // Pointer to base class
    Base baseObj;    // Base class object
    Derived derivedObj;  // Derived class object

    basePtr = &baseObj;
    basePtr->show(); // Calls Base class show() function

    basePtr = &derivedObj;
    basePtr->show(); // Calls Derived class show() function due to overriding

    return 0;
}

