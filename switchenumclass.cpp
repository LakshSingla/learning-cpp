#include <iostream>

enum class Color{
	RED, BLUE
};

int main(){
	Color c = Color::RED; 
	switch(c){
		case Color::RED: 
			std::cout<<"Red"<<std::endl;
			break;
		case Color::BLUE: 
			std::cout<<"Blue"<<std::endl;
			break;
	}
}
