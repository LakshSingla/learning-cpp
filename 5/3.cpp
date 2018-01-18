#include <iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main(){
	int a, b;
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of A: ";
	cin>>b;
	zeroSmaller(a, b);
	cout<<"New values of A and B are: "<<a<<" "<<b<<" respectively";
	cout<<endl;
	return 0;
}
void zeroSmaller(int& x, int&y){
	if(x > y) y = 0;	
	if(x < y) x = 0;	
}	
