#include <iostream>

int main(){
	enum class Test{
		RED, BLUE	
	};
	int x[10];
	x[static_cast<int>(Test::RED)] = 5;
	std::cout<<x[static_cast<int>(Test::RED)]<<std::endl;
	//std::cout<<x[(Test::RED)]<<std::endl;
}
