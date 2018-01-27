#include <iostream>
using namespace std;
int main(){
	int *x;
	int y = 5;
	x = &y;
	int *z = new int;
	*z = y;
	cout<<*x;
	cout<<*z;
	delete z;
	cout<<endl;
	return 0;
}
