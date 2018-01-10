#include <iostream>
using namespace std;
int main(){
	int option;
	double input;
	cout<<"Type 1 to convert Fahrenheit to Celsius,\n "
	    <<"    2 to convert Celsius to Fahrenheit: ";
	cin>>option;
	switch(option){
		case 1:
			cout<<"Enter temperature in Fahrenheit: ";
			cin>>input;
			cout<<"Temp in Celsius is: "<< (input-32)*5/9;
			break;
		case 2:
			cout<<"Enter temperature in Fahrenheit: ";
			cin>>input;
			cout<<"Temp in Fahrenheit is: "<< (input-32)*5/9;
			break;
		default:
			cout<<"Invalid option entered";
			break;

	}
	cout<<endl;
	return 0;
}
