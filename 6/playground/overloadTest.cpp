#include <iostream>
using namespace std;
void x(){
	cout<<"Empty";
} 

void x(int x ){
	cout<<"One int "<<x;
}
int main(){
	x();
	cout<<endl;
	x(5);
	cout<<endl;
	return 0;
}
