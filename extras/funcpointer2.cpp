#include <iostream>

int add(int x, int y){ return x + y; }

int main(){
	int (*fptr)(int, int) = add; 
	std::cout<<fptr(2, 3)<<std::endl;
}
