#include <iostream>

class A {
	public : 
	int a ;
	class B {
		public:
		void sayHi() {
			std::cout << "Hi from A::B::sayHi()" << std::endl;
			std::cout << a << std::endl; ;
		}
	};
};

int main(){
	A::B b; 
	b.sayHi();
}
