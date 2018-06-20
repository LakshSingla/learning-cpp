#include <iostream>
#include <set>

int main () {
	std::set<int> m { 2, 3, 4, 5, 6};
	std::set<int>::iterator it = m.begin();
	std::cout << "SET: ";
	for(const auto &elem : m) std::cout << elem << " " ;
	std::cout << std::endl <<  "Before inserting: " << *it << std::endl;
	m.insert(1);
	std::cout << "SET: ";
	for(const auto &elem : m) std::cout << elem << " " ;
	std::cout << std::endl <<"After inserting: "  << *it << std::endl; //Will point to the original member and not the new one
	
}
