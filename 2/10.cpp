#include <iostream>
using namespace std;
int main(){
	float pounds = 0, shillings = 0, pence = 0;
	cout<<"Enter pounds: ";
	cin>>pounds;
	cout<<"Enter shillings: ";
	cin>>shillings;
	cout<<"Enter pence: ";
	cin>>pence;
	cout<<"Decimal pounds: \x9c"<<(pounds+(shillings/20)+(pence/(12*20)));
	cout<<endl;
	return 0;
}
