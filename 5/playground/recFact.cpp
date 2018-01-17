#include <iostream>
using namespace std;
unsigned long int fact(int n);
int main(){
	cout<<fact(6);
	cout<<endl;
	return 0;
}
unsigned long int fact(int n){
	if(n==1)
		return 1;
	return n * fact(n -1);
}
