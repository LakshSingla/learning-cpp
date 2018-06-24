#include <iostream>
#include <vector>

int main(){
	std::vector< std::vector<int> > v {
		{1, 2, 3},
		{2, 3, 4},
		{3, 4, 5}, 
		{4, 5, 6}
	};
	
	for (const auto&v1 : v) {
		for(const auto& elem: v1)
			std::cout << elem << "\t";
		
		std::cout << std::endl;
	}
	return 0;
}
