#include <iostream>
#include <vector>

int main(){
	std::vector<int>vec{1, 2, 3, 4, 5};
	std::cout<<vec[2]<<std::endl;
	std::cout<<vec.size()<<std::endl;

	for(const auto &elem : vec) {
		std::cout<<elem<<std::endl;		
	}

	return 0;
}
