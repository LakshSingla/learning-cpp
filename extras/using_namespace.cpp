#include <iostream>

namespace NS {
	void print(int x) {
		std::cout << "This is some text from NS::print()" << std::endl;
	}
};

void print() {
	std::cout << "This is some text from ::print()" << std::endl;
}

using NS::print ;
//using namespace NS;

int main() {
	print();
	print(5);
}

