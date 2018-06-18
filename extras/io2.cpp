#include <iostream>

int main(){
	char ch; 
	std::cin.get(&ch, 1);
	std::cout << ch << std::endl;
	std::cout << static_cast<int>(ch) << std::endl ;
}
