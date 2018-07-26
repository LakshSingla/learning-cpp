#include <iostream>

class Dog {
	public:
		int id;
		int *res;
		Dog(int id, int res_val):id(id),res(new int{res_val}){
			std::cout << "Dog with id " << this->id << " created" << std::endl;
		}

		Dog(const Dog& d):Dog(d.id, *(d.res)) {}
		~Dog() {
			std::cout << "Dog with id " << id << " deleted" << std::endl;
			delete res;
		}
};

int main () {
	Dog* d {new Dog{42, 52}};
	{
		Dog x {*d};
	}
	std::cout << d->id << std::endl;
	std::cout << d->id << std::endl;
	return 0;
}
