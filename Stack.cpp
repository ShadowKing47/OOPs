#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> a;
	//pushing element
	a.push(12);
	a.push(13);
	a.push(78);
	
	cout<< "Top element"<< a.top() << endl;
	a.pop();
	
	cout<< "Top element"<< a.top() << endl;
	a.pop();
	
	stack<char> ch;
	string s = "Nameste";
	
	for(char c : s){
		ch.push(c);
	}
	
	string rev;
	while(!ch.empty()){
		rev = rev+ch.top();
		ch.pop()
	}
	
	cout<< "reversed string is"<< rev << endl;
	
	return 0;
}
