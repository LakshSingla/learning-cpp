#include <iostream>

int delta(int x, int y) {
	return x + y;
}
int delta(float x, float y) {
	return x + y;
}

int main(){
	std::cout<<delta(4, 5.5f);
}
