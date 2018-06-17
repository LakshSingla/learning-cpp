#include <iostream>

class A {
	public: 
	virtual int returnVal(){
		return 5;	
	}
};

class B : public A{
	public: 
	virtual float returnVal (){
		return 69.69;	
	}
};

int main(){
	B b; 
	A &a = b ;
	a.returnVal();
}
