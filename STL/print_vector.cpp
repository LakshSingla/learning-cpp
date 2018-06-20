#include <iostream>
#include <vector>

template <typename T>
class Vector_modified : std::vector<T> { 
	public:
	friend std::ostream& operator << (const std::ostream& out, const Vector_modified<T> &self) const {
		for(const auto &elem : self) {
			std::cout << elem << "\t" ;
		}
		out << std::endl;
		return out;	
	}
};

int main() {
	Vector_modified<int> v; 
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	std::cout << v << std::endl;
	
}
