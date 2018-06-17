#include <iostream>

void arrSize(const int (&arr)[5][5]){
	std::cout<<sizeof(arr)<<std::endl;
}

int main(){
	int x[5][5];
	std::cout<<sizeof(x)<<std::endl;
	arrSize(x);
	return 0;
}
