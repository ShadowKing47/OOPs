#include <iostream>
using namespace std;

class Parent {
public:    
    // This method is not virtual, so function overriding does not occur
    void getInfo() {
        cout << "Parent class\n";
    }
};

class Child : public Parent {
public:
    // This method has the same name as in Parent, but it's not overriding since Parent's method is not virtual
    void getInfo() {
        cout << "Child class\n";
    }    
};

int main() {
    Parent p1;          // Create an object of Parent class
    Parent* parentPtr;  // Declare a pointer of type Parent

    parentPtr = &p1;    // Point to the Parent object
    p1.getInfo();       // Calls Parent's getInfo() function

    Child c1;           // Create an object of Child class
    parentPtr = &c1;    // Point to the Child object

    // The following line calls Child's getInfo() function, but this is not due to function overriding
    // Since getInfo() is not virtual in Parent, this is just method hiding
    c1.getInfo();       // Calls Child's getInfo() function

    return 0;
}

