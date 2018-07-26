#include <iostream>
#include <string>


class Animal {
	public:
		Animal(){
			std::cout << "Animal()" << std::endl;
			my_voice = "???";
		}
		std::string my_voice;
		void say () {
			std::cout << my_voice << std::endl;	
		}
};

class Dog : public Animal {
	public:
		Dog(){
			std::cout << "Dog()" << std::endl;
			my_voice = "Woof";
		}
};

int main () {
	Dog d; 
	d.say();
}

