#include <iostream>

auto add(int x, int y) -> int;
int main(){
	std::cout<<add(5, 6);
	return 0;
}

int add(int x, int y){ return x + y; } ;
