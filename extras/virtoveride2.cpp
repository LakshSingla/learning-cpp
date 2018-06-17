#include <iostream>

class A {
	public: 
	virtual int returnVal(){
		return 5;	
	}
	virtual float returnVal(int x){
	}
};
class B : public A{
	public: 
	float returnVal override final(int x){
		return 69.69;	
	}
};

int main(){
	B b; 
	A &a = b ;
	std::cout<<a.returnVal()<<std::endl;
	std::cout<<a.returnVal(5)<<std::endl;
}
