#include <iostream>
using namespace std;
int main(){
	int x, z;
	z = 19;
	int& y = x;
	y = 5;
	y = z;
	cout<<x;
	cout<<endl;
	return 0;
}
