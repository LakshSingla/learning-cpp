#include <iostream>
using namespace std;
int main(){
	enum Month{
		Jan = 1, Feb, Mar, Apr = 11, Jun, Jul=2, Aug, Sep
	}month1, month2;
	cout<<Jan<<endl;
	cout<<Feb<<endl;
	cout<<Mar<<endl;
	cout<<Apr<<endl;
	cout<<Jun<<endl;
	cout<<Jul<<endl;
	cout<<Aug<<endl;
	cout<<Sep<<endl;
	month1 = Jan; month2 = Jul;
	cout<<(month1==month2);
	cout<<endl;
	return 0;
}
