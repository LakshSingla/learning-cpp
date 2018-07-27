#include <iostream>
#include <cstddef>

void doSomething(std::nullptr_t ptr){
	std::cout << "NULLPTR function called" << std::endl;
	std::cout<< "Doing something"<<std::endl;
}

void doSomething(int *ptr){
	std::cout << "int* function called" << std::endl;
	std::cout<< "Doing something"<<std::endl;
}

int main(){
	char a = 'a';
	char *c  = &a;
	doSomething(nullptr);
	doSomething((int *)c);
	return 0;
}
