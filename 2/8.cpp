#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const long int POP1 = 2425785, POP2 = 47, POP3 = 9761;
	cout<<setfill('.');
	cout<<setw(8)<<"LOCATION"<<setw(12)<<"POPULATION"<<endl;
	cout<<setw(8)<<"Portcity"<<setw(12)<<POP1<<endl;
	cout<<setw(8)<<"Hightown"<<setw(12)<<POP2<<endl;
	cout<<setw(8)<<"Lowville"<<setw(12)<<POP3<<endl;
}

