#include <iostream>
using namespace std;

void swap(int&, int&);

int main(){
	int a, b;
	cout<<"Enter the values of A and B: ";
	cin>>a>>b;
	swap(a,b);
	cout<<"Values of A and B are now: "<< a <<" "<<b;
	cout<<endl;
	return 0;
}

void swap(int&x, int&y){
	int temp = x; 
	x = y;
       	y = temp;
}
