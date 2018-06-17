#include <iostream>

void sum(int x, int y);
void sum(int a, int b);

class Calc{
	int x = 0; 

	public: 
	Calc& add     (int y) { x += y; return *this ;}
	Calc& subtract(int y) { x -= y; return *this ;}
	Calc& multiply(int y) { x *= y; return *this ;}
	Calc& divide  (int y) { x /= y; return *this ;}

	void printValue() { std::cout<< x << std::endl;}
} c;

int main(){
	c.add(19).subtract(7).printValue();
	c.add(9).subtract(3);
	c.printValue();
}
