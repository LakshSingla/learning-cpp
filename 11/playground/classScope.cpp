#include <iostream>

using namespace std;

class Person{
	public:
	void getData () {
		cout<<"Person::getData()"<<endl;
	}	
};

class Student : public Person {
	public:
	void showData(); 
};
void Student::showData() {
	getData();
}

int main () {
	Student s;
	s.showData();
	return 0;
}
