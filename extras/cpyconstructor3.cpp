#include <iostream>

class A {
	public:
	int x; 
	A(int x):x(x){}
	A(const A& a) {
		std::cout << "Calling the new copy constructor"	<< std::endl;
	}
};

int main(){
	A a = 10;
	A b = a;
	std::cout << a.x << std::endl;
	std::cout << b.x << std::endl;
}
