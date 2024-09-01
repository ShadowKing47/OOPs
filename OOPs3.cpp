#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name,int age){
    	this->name = name;
    	this->age = age;
    }
    
    Person(){
    	
    }	
	

};

class Student : public Person{
public:
    int rollno;
    
    	void getInfo(){
		cout << "Name: "<< name<< endl;
		cout << "age: "<< age<< endl;
		cout << "roll number:  "<< rollno<< endl;
	}	
};
int main(){
	Student s1;
	s1.name = "Rahul";
	s1.age = 14;
	s1.rollno = 45;
	
	s1.getInfo();
	
	return 0;
}
