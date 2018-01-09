#include <iostream>
using namespace std;
int main(){
	double celsius;
	cout<<"Enter the temperature in \xB0 C";
	cin>>celsius;
	cout<<"The temperature in \xB0 Fis: "<<(celsius * 9)/5 + 32;
	cout<<endl;
	return 0;
}
