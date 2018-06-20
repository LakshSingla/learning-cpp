#include <iostream>

template <int x>
void sayHi(){
	std::cout << x << std::endl;
}

int main(){
	sayHi<static_cast<int>(5.92)>();
}
