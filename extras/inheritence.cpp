#include <iostream>

class A{
	private: 
	void print(){
		std::cout<<"This is me printing something"<<std::endl;
	}
};

class B : public A {
	public:
	void print(){
		std::cout<<"This is something in the base class"<<std::endl;
		std::cout<<"This is me printing something"<<std::endl;
	}
};

int main(){
	B b; 
	b.print();
	return 0;
}
