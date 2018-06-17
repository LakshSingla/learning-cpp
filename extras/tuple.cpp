#include <tuple>
#include <iostream>

std::tuple <int, double, int> returnMultiple () {
	return std::make_tuple(3, 4.5, 6);
}

int main() {
	std::tuple <int, double, int> s = returnMultiple();
	std::get<0>(s) = 42;
	std::cout<<std::get<0>(s)<<std::endl;
	std::cout<<std::get<1>(s)<<std::endl;
	std::cout<<std::get<2>(s)<<std::endl;
}
