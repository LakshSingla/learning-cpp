#include <iostream>
using namespace std;

double power(double, int = 2);

int main(){
	double base;
	int exp;
	cout<<"Enter the base value: ";
	cin>>base;
	cout<<"Enter the exponent value: ";
	cin>>exp;
	cout<<"Base ^ Exponent = "<<power(base, exp);
	cout<<endl;
	cout<<"Base ^ 2 = "<<power(base);
	cout<<endl;
	return 0;
}

double power(double base , int exp){
	double res = 1;
	for(int x = 0; x < exp; x++){
		res*=base;
	}	
	return res;
}
