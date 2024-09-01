//Pass by reference
#include <iostream>

using namespace std;
void swap(int &a,int &b){ //Pass by refernce is done with the help of the element &
	int t = a;
	a = b;
	b = t;
}
int main(){
	
	int a = 10;
	int b =20;

	cout << 'a' << a << endl;
	cout << 'b' << b << endl;
		
	swap(a,b);
	
	cout << 'a' << a << endl;
	cout << 'b' << b << endl;
	return 0;
	
	
}
