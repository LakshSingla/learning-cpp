#include <iostream>
#include <string>

class Dog {
	std::string name; 
	public:
	int *resource;
	Dog(std::string str):name(str){
		std::cout << "Dog is created" << std::endl;
		resource = new int{42};
	}
	~Dog(){
		std::cout << "Dog is destroyed" << std::endl;
		//delete resource;
	}
};

int main() {
	Dog *a = new Dog("Harry");	
	int *a_res = a->resource;
	delete a; 
	std::cout << *a_res << std::endl ;
}
