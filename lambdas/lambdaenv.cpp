//Lambdas dont give a fuck about env in capture value mode
//Lambdas give a fuck about env in capture reference mode
#include <iostream>

int main () {
	int x = 42;
	auto l = [&](){ std::cout <<"Inside lambda, x = "<< x << std::endl;};
	std::cout << "Outside lambda, x = " << x << std::endl;
	std::cout << "Executing lambda" << std::endl;
	l();
	x = 52;
	std::cout << "Outside lambda, x = " << x << std::endl;
	std::cout << "Executing lambda" << std::endl;
	l();
	return 0;
}
