#include <iostream>

class A {
	public:
	virtual void sayHi(){
		std::cout<<"Hi from A::sayHi()"<<std::endl;
	}
};

class B : public A {
	public:
	void sayHi(){
		std::cout<<"Hi from B::sayHi()"<<std::endl;
	}
};

class C : public B {
	public:
 	void sayHi(){
		A::sayHi();
		B::sayHi();
		std::cout<<"Hi from C::sayHi()"<<std::endl;
	}
};

int main(){
	C c ;
	A &cRef = c ;
	cRef.sayHi();
}
