#include <iostream>
#include <array>

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	for(const auto &elem : arr) std::cout<<elem<<std::endl;
	for(const auto &elem : arr) std::cout<<elem<<std::endl;
}
