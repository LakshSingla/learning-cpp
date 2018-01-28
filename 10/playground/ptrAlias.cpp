#include <iostream>
using namespace std;
int main(){
	int x = 10; 
	int w = 15;
	int *y;
	int*& z = y;
	y = &x;
	cout<<*z;
	z = &w;
	cout<<endl;
	cout<<*z;
	cout<<endl;
	cout<<*y;
	cout<<endl;
	return 0;
}
