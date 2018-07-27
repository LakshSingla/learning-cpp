#include <iostream>
#include <functional>

std::function<int(int)> add(int x) {
	return [=](int y) -> int  {
		return x + y;	
	};
}

int main () {

	auto add1 = add(1);
	std::cout << add1(41) << std::endl;
	
}
