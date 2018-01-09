#include <iostream>
using namespace std;
int main(){
	const float BPD = 1.487;
	const float FFR = 0.172;
	const float GDT = 0.584;
	const float JYN = 0.00955;
	float usd = 0;
	cout<<"Enter the amount in USD: ";
	cin>>usd;
	cout<<"The amount in British Pound is: "<<usd*BPD<<endl;
	cout<<"The amount in French Franc is: "<<usd*FFR<<endl;
	cout<<"The amount in German Deutschemark is: "<<usd*GDT<<endl;
	cout<<"The amount in Japanese Yen is: "<<usd*JYN<<endl;
	cout<<endl;
	return 0;
}
