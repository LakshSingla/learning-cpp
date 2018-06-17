#include <iostream>
#include <typeinfo>

int main(){
	double d{4.0};
	short s{2};
	std::cout<<typeid(d+s).name()<<" "<<d + s<< std::endl;
}
