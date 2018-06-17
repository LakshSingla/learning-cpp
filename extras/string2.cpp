#include <iostream>

int main(){
	char string[] = "Hello, world";
	char *stringPtr = "Some value";
	stringPtr = "Some other value";
	std::cout<<string<<std::endl;
	std::cout<<stringPtr<<std::endl;
}
