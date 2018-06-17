#include <iostream>



void print(char ch=' ') {
	std::cout<<"In the first definition"<<std::endl;
	std::cout<<ch<<std::endl;
}

int main(){
	print();
	print('a');
}
