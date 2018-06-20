#include <iostream>
#include <vector>

class A {
	int a; 
	float b; 
	char c ; 
	public: 
	void memFunc const () {
		int a ;
		std::cout << "This is some member function " << std :: cout;
	} 
};

int main () {
	std::vector <A> A_vec; 
	std::cout << "Sizeof A class : "<<sizeof(A) << std::endl; 
	std::cout << "Max sizeof of vector container of A: " << std::vector<A>::size_type << std::endl;
	std::cout << "Sizeof A vector when empty: "<<sizeof(A_vec) << std::endl; 
	A_vec.pushback(A());
	std::cout << sizeof(A_vec) << std::endl; 
}
