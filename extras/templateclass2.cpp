#include <iostream>
#include <initializer_list>

template <typename T>
class Print_to_stream {
	T init_var;
	public:
	explicit Print_to_stream(T x):init_var(x){};	
	void print();
};

template <typename t>
void Print_to_stream<t>::print() {
	std::cout << this->init_var << std::endl;
}

class MyType {
	int size;
	int *res;
	public:
	explicit MyType(std::initializer_list<int> i):size(i.size()) {
		this->res = new int[i.size()];
		int ii = 0;
		auto list_ptr = i.begin();
		for(; list_ptr != i.end(); ++list_ptr, ++ii) 
			res[ii] = *list_ptr;
	}

	friend std::ostream& operator << (std::ostream& out, MyType m) {
		for (int i = 0; i < m.size; ++i) 
			out << (m.res)[i] << " ";

		out << std::endl;
	}

	~MyType() {
		delete[] this->res;	
	}
};

int main () {
	Print_to_stream<int> p{5};
	MyType m {1, 2, 4, 8, 16};
	Print_to_stream<MyType> p2{m};
	p.print();
	p2.print();
}

