#include <iostream>

class Fraction {
	private:
	int num; 
	int den;

	public:
	friend std::ostream& operator << (std::ostream& out, const Fraction& f) {
		out << f.num << " / " << f.den ;
		return out; 
	}

	friend std::istream& operator >> (std::istream& in, Fraction &f) {
		std::cin >> f.num ;
		std::cin.ignore(10000, '/');
		std::cin >> f.den;
		return in;
	}
};

int main() {
	Fraction f1; 
	std::cout << "Enter a fraction of form A / B: " ;
	std::cin >> f1; 
	std::cout << "The fraction you entered is: " << f1 << std::endl;
}
