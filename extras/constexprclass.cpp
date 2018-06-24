#include <iostream>

class A {
	private: 
	static constexpr int constantSomething = 100;

	public:
	int arr[constantSomething];
	A(){}
};

//A::constantSomething = 100;

int main(){
	A a; 
}
