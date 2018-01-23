#include <iostream>
using namespace std;
int main(){
	int x;
	enum Z{A, B}z;
	enum Y{C, D}y;
	z = A;
	x = D; 
	y = (Y)A;
	cout<<z<<" "<<x;
	cout<<endl;
	return 0;
}
