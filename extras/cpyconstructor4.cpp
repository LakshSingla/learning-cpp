#include <iostream>

class A {
	public:
	A(){}
	A(const A&a) {
		std::cout << "Copy constructor called" << std::endl;
	}
};

A doSomething(A a ) {
	return a ;
} 


int main(){
	A a; 
	doSomething(a);
}
