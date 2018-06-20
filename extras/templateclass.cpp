#include <iostream>

template <typename T>
class A {
	private:
	T x; 
	public:
	A(T x);
	void sayA();
};

template <typename File>
A<File>::A(File x):x(x){
	std::cout << "Template called with type: " << std::endl;
}

template <typename F>
void A<F>::sayA(){
	std::cout << this->x << std::endl;
}

int main() {
	A<int> a (6);
	a.sayA();
}
