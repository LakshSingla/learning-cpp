#include <iostream>
using namespace std;
double power(double, int = 2);
void power(char, int = 2);
int power(int, int = 2);
long int power(long, int = 2);
float power(float, int = 2);

int main(){
	cout<<power(4, 3)<<endl;
	cout<<power(1.2)<<endl;
	power('u');
	power('x', 3);
	cout<<endl;
	return 0;
}

double power(double base , int exp){
	cout<<"In double body"<<endl;
	double res = 1;
	for(int x = 0; x < exp; x++){
		res*=base;
	}	
	return res;
}
int power(int base , int exp){
	cout<<"In int body"<<endl;
	int res = 1;
	for(int x = 0; x < exp; x++){
		res*=base;
	}	
	return res;
}
long int power(long base , int exp){
	cout<<"In long body"<<endl;
	long res = 1;
	for(int x = 0; x < exp; x++){
		res*=base;
	}	
	return res;
}
float power(float base , int exp){
	cout<<"In float body"<<endl;
	float res = 1;
	for(int x = 0; x < exp; x++){
		res*=base;
	}	
	return res;
}
void power(char base , int exp){
	cout<<"In char body"<<endl;
	for(int x = 0; x < exp; x++){
		cout<<base;
	}
	cout<<endl;
}
