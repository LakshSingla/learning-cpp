#include <iostream>
using namespace std;
int main(){
	enum DaysOfWeek{
		Sun, Mon, Tue, Wed, Thu, Fri, Sat
	};	
	enum Month{
		Jan, Feb, Mar
	};
	DaysOfWeek day1, day2, day3;
	Month month1;
	month1 = (Month)((int)(day1+day2));
	day1 = Mon;
	day2 = Mon;
	day3 = (DaysOfWeek)3;
	cout<<day1<<day2<<day3;
	cout<<Mon;
	cout<<endl<<month1;
	cout<<endl;
	return 0;
}
