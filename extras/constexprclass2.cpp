#include <iostream>

class A {
	static int x ; 
	public: 
	static int getX() {
		return x; 	
	};
	int y[10];
	A(){}
};

int A::x = 19;

int main(){
	std::cout << A::getX() << std::endl;
	A a ;
	std::cout << a.getX() << std::endl;
}
