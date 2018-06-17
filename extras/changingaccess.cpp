#include <iostream>

class A{
	protected: 
	void print(){
		std::cout<<"In the protected portion of the print function, class B"<<std::endl;
	}
};

class B : public A {
	public : 
	using A::print; 
	void print(){
		std::cout<<"In the public portion of the print function, class B"<<std::endl;
	}
};

int main(){
	A a; 
	//a.print();
	B b ; 
	b.print();
}
