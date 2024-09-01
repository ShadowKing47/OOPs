#include <iostream>

using namespace std;

class Student {
public:
    string name;       // Class member to store the name of the student
    double* cgpaPtr;   // Pointer to dynamically allocate memory for storing CGPA

    // Constructor to initialize Student object
    Student(string name, double cgpa) {
        this->name = name;      // Assigns the 'name' parameter to the class member 'name'

        // Dynamically allocates memory on the heap for a double variable
        cgpaPtr = new double; 

        // Assigns the 'cgpa' parameter to the allocated memory pointed to by 'cgpaPtr'
        *cgpaPtr = cgpa;        
    }

    // Copy Constructor to create a deep copy of a Student object
    Student(Student &obj) {
        this->name = obj.name;  // Copies the 'name' from the existing object 'obj' to the new object

        // Dynamically allocates new memory on the heap for the 'cgpaPtr' of the new object
        cgpaPtr = new double;   

        // Copies the CGPA value from the existing object's allocated memory to the new object's memory
        *cgpaPtr = *(obj.cgpaPtr); 
    }

    // Destructor to clean up dynamically allocated memory
    ~Student() {
        delete cgpaPtr; // Frees the memory allocated for 'cgpaPtr' to avoid memory leaks
    }

    // Method to print student information
    void getInfo() {
        cout << "Name : " << name << endl;          // Prints the student's name
        cout << "CGPA : " << *cgpaPtr << endl;      // Dereferences 'cgpaPtr' to print the CGPA value
        cout << "" << endl;
    }
};

int main() {
    Student s1("Rahul Kumar", 8.9);  // Creates a Student object 's1', allocating memory for CGPA

    Student s2(s1);                  // Creates a copy of 's1' using the copy constructor

    s1.getInfo();                    // Prints the information of 's1'

    *(s2.cgpaPtr) = 9.2;             // Modifies the CGPA value of 's2' (affects both 's1' and 's2' in shallow copy scenario)

    s2.getInfo();                    // Prints the updated information of 's2'

    return 0;
}

