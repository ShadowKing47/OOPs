#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static member variable

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
    Counter c1;   // Create first object of Counter
    Counter c2;   // Create second object of Counter
    Counter c3;   // Create third object of Counter

    // Get and display the count of Counter objects created
    cout << "Number of Counter objects created: " << Counter::getCount() << endl;

    return 0;
}

