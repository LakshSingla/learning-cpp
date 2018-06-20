#include <iostream>

template <typename T>
class A{
	T x; 
	public: 
	A(T);
	void displayMember();
};

template <typename T>
A<T>::A(T t):x(t){}

template <typename T>
void A<T>::displayMember() { std::cout << this->x << std::endl; }


class B : A<int>, A<char> {
	public:
	B(int, char);
	void showBoth();
};

B::B(int x, char y):A<int>(x), A<char>(y) {}

void B::showBoth() {
	A<int>::displayMember();
	A<char>::displayMember();
}

int main(){
	/*A<int> a(10); 
	a.displayMember();*/

	B b(42, 's');
	b.showBoth();
}
