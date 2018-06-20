#include <iostream>

class A {
	public:
	A() {
		std::cout << "An object is created " << std::endl;
	}
	~A() {
		std::cout << "Destructor called" << std::endl;
	}
};

void doSomething(){
	A x; 
	throw 0;
	std::cout << "This should not be printed" << std::endl;
}

int main(){
	doSomething();
}


