//vectors are like dynamic array , their size dosen't needs to be specified while initilaizing them

#include <iostream>
#include<vector>
using namespace std;
#include <algorithm>

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(13);

    // Using indexing
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    // Using iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << endl; // Dereference the iterator
    }

    // Using range-based for loop
    //for (auto element : v) {
     //   cout << element << endl;
    //}
      
      
     v.pop_back();
     
     vector<int> v2 (2,12);
     
     swap(v,v2); //swap values of v and v2
     
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
     sort(v.begin(),v.end());
     
     return 0;
}


