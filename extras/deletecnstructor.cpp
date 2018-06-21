#include <iostream>

class A {
	public:
	void sayHi (int x) const {
		std::cout << "Hi" << x << std::endl;
	}
	void sayHi(char) = delete;
};

int main () {
	A a; 
	//a.sayHi(1);
	a.sayHi(static_cast<int>(1));
	//a.sayHi('A');

}
