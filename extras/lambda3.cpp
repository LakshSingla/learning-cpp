#include <iostream>

int x () { return 5; }

int main () {
	int (*l)() = x; 
	int (*m)() = []()->int{return 420;}; 
	//auto m = [&]()->int{return l();}; 
	std::cout << l() << std::endl;
	std::cout << m() << std::endl;
}
