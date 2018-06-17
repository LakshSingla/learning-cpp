#include <iostream>
#include <array>

int main(){
	std::array<int, 5> arr{1, 2, 3, 4, 5};
	for(const auto &elem : arr) std::cout<<elem<<std::endl;
	arr = {42};
	for(const auto &elem : arr) std::cout<<elem<<std::endl;
}
