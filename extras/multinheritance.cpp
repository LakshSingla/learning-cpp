#include <iostream>

class A {
	public:
	void disp(){
		std::cout<<"In A::disp()"<<std::endl;
	}
};

class B {
	public:
	void disp(){
		std::cout<<"In B::disp()"<<std::endl;
	}
};

class C : public A, public B {
	public:
	void somefunc(){
		A::disp();	
	}
};

int main(){
	C c ;
	c.somefunc();
	c.B::disp();
}
