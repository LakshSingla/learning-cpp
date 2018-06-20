#include <iostream>
#include <string>

class A {
	int x; 
	public: 
	A(int x):x(x){}
	int getx() const {return x; } 
	void operator () (const std::string &str) {
		std::cout << "Hello, "	+ str << std::endl;
	}
	//friend void operator()(const A&, const std::string&);
};

/*void operator() (const A &a, const std::string &str) { 
	std::cout << ("Hello, " + str) * a.getx() << std::endl;
}*/

int main () {
	A a = 2;
	a("World");
}
