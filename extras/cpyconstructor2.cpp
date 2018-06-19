#include <iostream>

class A {
	public:
	int *aPtr; 
	A(int i):aPtr(new int[10000]{0}){}
	~A(){
		std::cout << "The destructor called" << std::endl;
		delete aPtr; 
	}
};

int main() {
	A *x = new A{A{5}};
	std::cout << *x->aPtr << std::endl;
	std::cout << "Now destroying x" << std::endl;
	delete x; 
	std::cout << "Destroyed x " << std::endl;

}
