#include <iostream>

class K {
	public: 
	int arr[10]{0};
};

void instantiate(K k){
	int i = 0;
	for(auto &elem : k.arr){
		elem = i++;
	}
	for(auto &elem : k.arr){
		std::cout<<elem<<"\t";
	}
	std::cout<<std::endl;
}

int main(){
	K k; 
	instantiate(k);
	for(int elem: k.arr){
		std::cout<<elem<<"\t";
	}
	std::cout<<std::endl;
}
