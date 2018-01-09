//Important program in making use of 
//Typecasting to perform certain operations
#include <iostream>
using namespace std;
int main(){
	float f_pounds = 0;
	int   i_pounds = 0;
	float f_shillings = 0;
	int   i_shillings = 0;
	int   i_pence = 0;
	int   temp = 0;
	cout<<"Enter decimal pounds: ";
	cin>>f_pounds;
	i_pounds = static_cast<int>(f_pounds);
	f_shillings = (f_pounds - i_pounds) * 20;
	i_shillings = static_cast<int>(f_shillings);
	i_pence = static_cast<int>((f_shillings - i_shillings) * 12);
       	cout<<"Equivalent in old style notation: \x9c"<<i_pounds<<"."<<i_shillings<<"."<<i_pence;	
	cout<<endl;
	return 0;
}
