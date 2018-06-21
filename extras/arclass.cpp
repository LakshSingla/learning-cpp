#include <iostream>

template <int x>
class A {
	int mem[x];
	public:
	A(int *ptr) {
		for(int i = 0; i < x; i++) mem[i] = ptr[i]; 
	}
	void display(){
		for(int i = 0; i < x; i++) std::cout << mem[i] << "\t" ;
		std::cout << std::endl;
	}
};

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	//int *dw = {1, 2, 3};
	char *dww = "Hello";
	//char *dwww = {'1', 'a', 'a'};
	A<5> a{arr};
	//A<3> b{{1, 2, 3}};
	a.display();
	//b.display();
}
