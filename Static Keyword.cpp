#include <iostream>
using namespace std;

// Global static variable
static int globalCount = 0;

void incrementGlobalCount() {
    globalCount++;
    cout << "Global count: " << globalCount << endl;
}

class Counter {
private:
    static int count;  // Static member variable

public:
    // Constructor increments the static count variable
    Counter() {
        count++;
    }

    // Static function to get the current count
    static int getCount() {
        return count;
    }
};

// Initialize static member variable
int Counter::count = 0;

int main() {
    // Demonstrating global static variable
    incrementGlobalCount(); // Global count: 1
    incrementGlobalCount(); // Global count: 2

    // Demonstrating static member variable
    Counter c1; // Creates the first object, increments count to 1
    Counter c2; // Creates the second object, increments count to 2

    cout << "Number of Counter objects created: " << Counter::getCount() << endl;

    return 0;
}

