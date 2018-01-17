#include <iostream>
using namespace std;
float mod(float x){
	cout<<"Number entered is a float";
	cout<<endl;
	return (x > 0 ? x : -x);
}
int mod(int x){
	cout<<"Number entered is a int";
	cout<<endl;
	return (x > 0 ? x : -x);
}
int main(){
	int x = 1; 
	float y = -12.212;
	cout<<mod(x)<<endl;
	cout<<mod(y)<<endl;
	cout<<endl;
	return 0;
}
