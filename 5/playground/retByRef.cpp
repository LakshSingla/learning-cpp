#include <iostream>
using namespace std;
int x;
int& c();
int main(){
	c() = 5;
	cout<<x;
	cout<<endl;
	return 0;
}
int& c(){
	return x;
}
