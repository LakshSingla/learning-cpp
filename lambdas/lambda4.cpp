#include <iostream>

int main () {
	static int  x = 42; 
	int y = 52;
	auto l = []() -> void {
		std::cout << "In lambda(unmodified): " << x << std::endl;	
		//std::cout << y << std::endl;	
		++x;
		std::cout << "In lambda(modified): " << x << std::endl;	
	};
	l();
	std::cout << "Outside lambda(modified): " << x << std::endl;	
	return 0;
}
