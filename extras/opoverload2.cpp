#include <iostream>

class A{
	private:
	int m; 

	public:
	A(int a):m(a) {}

	int getm() const {
		return m;
	} 

	/*bool operator > (const A &y) { 
		std::cout << "Calling the A::>()" << std::endl;
		return this->getm() > y.getm();
	} */

	friend bool operator > (const A &x, const A&y);
};

bool operator > (const A &x, const A &y) { 
	std::cout << "Calling the ::>()" << std::endl;
	return x.getm() > y.getm();
}

int main () {
	A x = 10,  y = 20;
	std::cout << std::boolalpha << (x > y) << std::endl; 
}
