#include <iostream>
#include <cstddef>

void doSomething(std::nullptr_t ptr){
	std::cout<< "Doing something"<<std::endl;
}

int main(){
	doSomething(nullptr);
	return 0;
}
