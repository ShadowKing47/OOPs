#include <iostream>
#include <string>
using namespace std;

class Teacher{
	//properties
	//methods
//cannot be ascessed outside the class

//constructor is always public
//This constructor is Non_parameters Constructors
public: 
	Teacher(){
		cout << "Hi I am COnstructor" << endl;
		dept = "Computer Science";
	}
//This contructor is a Parameterized constructor	
	Teacher(string n,string d,string su,double sal){
		name = n;
		dept = d;
		subject = su;
		salary = sal;		
	}
		
	
	
private:
	double salary;
//can be ascessed by anyone	
public:	
	string name;
	string dept;

	string subject;
	
	void changeDept(string newDept){
		dept = newDept;
	}
//Setter Method	
	void setSalary(double s){
		salary = s;
		
	}
//Getter Method	
	double getSalary(){
		return salary;
	}
	
	void getInfo(){
		cout<< "Name : " << name<< endl;
		cout <<" "<<endl;
		cout<< "Department : "<< dept<< endl;
		cout<<"Subject : "<<subject<<endl;
	}
};


class account{
	public:
		account(string a,string user){
			
		}
		string acnt;
		string username;
		
//private ascess specifier helps in Data Hiding
	private:
		double balance;
		string password;	
};







int main(){
	Teacher t1;//constructor is called
	Teacher t2("Ramesh","ECE","Antenna",25901);
	Teacher t3(t1);
	
//Constructor: The Teacher() constructor
//prints "Hi I am Constructor" to the 
//console whenever an instance of Teacher is created.
	
	t1.name = "Shradha";
	t1.subject = "C++";
	t1.dept = "Computer Science";
	t1.setSalary(23871);
	t2.getInfo();
	
	t3.getInfo();
	cout << t1.getSalary() << endl;
	cout << t1.name << endl;
	cout << t1.dept<< endl;
	
	account a1("ABCID","Shadow");
	
	cout<< a1.username<< endl;
	
	
	return 0;
}




