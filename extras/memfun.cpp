#include <iostream>

class A {
	public:
	void fun1() {
		std::cout << "Defined before" << std::endl;
	}
	void fun2() {
		fun1();
		std::cout << "Defined after" << std::endl;
	}
};

int main() {
	A a; 
	a.fun2();
}
