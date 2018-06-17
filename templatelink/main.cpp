#include <iostream>
#include "template.h"


void other();

int main(){
	std::cout<<max(1, 2)<<std::endl;
	std::cout<<max('a', 'A')<<std::endl;
	other();
	return 0;
}

