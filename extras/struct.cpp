#include <iostream>

struct Test{
	int a = 4;
	int b = 5;
};

int main(){ 
	using namespace std;
	Test x;
	cout<<x.a<<" "<<x.b<<endl;
	return 0;
}
