#include <iostream>

int main(){
        int (*f)() = [](){
		return 42; 
	};

	std::cout << f() << std::endl;

}
