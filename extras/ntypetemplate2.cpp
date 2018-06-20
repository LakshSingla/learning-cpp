#include <iostream>

template <int x>
template <int y>
int add(int z){
	return x + y + z;
}

int main () {
	std::cout << add<2>(4) << std::endl;
}

