#include <iostream>
using namespace std;

class Student {
public:
    string name;  // Public member variable to store the name of the student
    
    // Default constructor (Non-parameterized)
    Student(){
        cout << "non_parameterized\n";  // This message will be displayed when the default constructor is called
    }
    
    // Parameterized constructor
    Student(string name){
        this->name = name;  // 'this->name' refers to the member variable, 'name' refers to the parameter
        cout << "Name : " << name;  // Display the name passed as an argument
        cout << " is a Parameterized\n";  // This message will be displayed when the parameterized constructor is called
    }
    
    // Destructor (optional, automatically provided if not declared)
    ~Student() {
        // Destructor logic can go here (if needed)
    }
};


class Print {
public:
    // Function to print an integer value
    void show(int a) {
        cout << "int a: " << a << endl;
    }   
    
    // Function to print a character value
    void show(char ch) {
        cout << "char ch: " << ch << endl;
    }
};

int main(){
	
	Print p;  // Create an object of the Print class

    // Demonstrating polymorphism through function overloading
    p.show(100);  // Calls the show function that takes an int parameter
    p.show('A');  // Calls the show function that takes a char parameter
    
    
    // Creating an object 's1' using the parameterized constructor
    Student s1("Tony Stark"); // This will call the parameterized constructor
    
    // Creating an object 's2' using the default constructor
    Student s2;  // This will call the non-parameterized constructor
    
    return 0;
}

