#include <iostream>
#include <string>

class A{
	private: 
	int x; 

	public:
	A(int x):x(x){}
	operator int () {
		std::cout << "Type conversion occuring" << std::endl;
		//return static_cast<std::string>("Hello jackass");	
		return this->x;
	}

};

int main () {
	A a(294); 
	std::cout << static_cast<int>(a) << std::endl;
}
