#include <iostream>
using namespace std;
void someFunc(int);
int main(){
	const int x = 5;
	someFunc(x);
	cout<<endl;
	return 0;
}
void someFunc(int a){
	cout<<a;
}
