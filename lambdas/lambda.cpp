#include <iostream>
#include <string>

int main(){
	[](const std::string& str){
		std::cout << "The string entered is: " << str << std::endl;
	}("Hello world");
}
