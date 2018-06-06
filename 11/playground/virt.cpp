#include <iostream>

using namespace std;

class Base {
	public: 
	virtual	void draw() = 0;
};

void Base::draw () { cout <<"Base"<<endl;}

class Derv1 : public Base {
	public:
	void draw () {
		cout<<"Derv1"<<endl;
	};
}d1;

class Derv2 : private Base {
	public:
	void draw () {
		cout<<"Derv2"<<endl;
	};
}d2;


int main () {
	Base *ptr = &d1;
	ptr->draw();
	ptr = &d2;
	ptr->draw();
	return 0;
}
