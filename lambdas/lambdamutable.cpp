#include <iostream>

int main () {
	int x = 42;
	auto l = [=]() mutable{
		std::cout << "Before changing the value of x in lambda function x = " << x << std::endl;
		++x;
		std::cout << "After changing the value of x in lambda function x = " << x << std::endl;
	};
	l();
	std::cout << "After lambda execution(In main()): x = " << x << std::endl;
}
