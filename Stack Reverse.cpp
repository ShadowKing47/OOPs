#include <iostream>
#include <stack>
#include <string>  // Add this header to use std::string

using namespace std;

int main() {
    std::stack<char> ch;
    std::string s = "Namaste";  // Corrected spelling of "Namaste"

    // Push each character of the string onto the stack
    for (int i =0;i< s.size();i++) {
        ch.push(s[i]);
    }

    std::string rev;  // 'rev' is the reversed string
    while (!ch.empty()) {
        rev += ch.top();  // Concatenating the top character to 'rev'
        ch.pop();  // Removing the top character after adding it to 'rev'
    }

    std::cout << "Reversed string is: " << rev << std::endl;

    return 0;  // Added return statement for main
}

