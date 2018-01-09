#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout<<setiosflags(ios::left);
	cout<<setw(10)<<"Last name"<<setw(13)<<"First name"<<setw(20)<<"Street Address"<<setw(15)<<"Town"<<setw(6)<<"State"<<endl;
	cout<<setw(10)<<"Jones"<<setw(13)<<"Bernard"<<setw(20)<<"109 Pine Lane"<<setw(15)<<"Littletown"<<setw(6)<<"MI"<<endl;
	cout<<setw(10)<<"O'Brian"<<setw(13)<<"Coleen"<<setw(20)<<"42 E. 99th Ave"<<setw(15)<<"Littletown"<<setw(6)<<"NY"<<endl;
	cout<<setw(10)<<"Wong"<<setw(13)<<"Harry"<<setw(20)<<"121-A Alabama St."<<setw(15)<<"Lakeville"<<setw(6)<<"IL"<<endl;
	cout<<endl;
	return 0;
}
