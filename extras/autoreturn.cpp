#include <iostream>

auto x(bool a) -> int { 
	if(a) return 5;
	else return 6;
}

int main(){
	std::cout << x(false) << std::endl;
}
