//dasfklfjslakdfjlk
//
//
#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << argc << std::endl;
	//for(const char* & arg: argv) std::cout << arg << std::endl;
	for(int i = 0; i < argc; i++) std::cout << argv[i] << std::endl;
	return 0;
}
