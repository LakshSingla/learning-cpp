#include <iostream>
using namespace std;
struct Date{
	int day;
	int month; 
	int year;
}date;
char Dummy;
int main(){
	cout<<"Enter the date in (DD/MM/YYYY) format: ";
	cin>>date.day>>Dummy>>date.month>>Dummy>>date.year;
	cout<<"The date entered is: "<<date.day<<"/"<<date.month<<"/"<<date.year;
	cout<<endl;
	return 0;
}
