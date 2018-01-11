#include <iostream>
using namespace std;
struct Phone{
	int areaCode;
	int exchange;
	int number;
}phone1, phone2;
char dummy;
int main(){
	phone1.areaCode = 212;
	phone1.exchange = 767;
	phone1.number = 8900;
	cout<<"Enter your areacode, exhange and number seperated by dashes(XXX-XXX-XXXX)";
	cin>>phone2.areaCode;
	cin>>dummy;
	cin>>phone2.exchange;
	cin>>dummy;
	cin>>phone2.number;
	cout<<"My number is ("<<phone1.areaCode<<") "<<phone1.exchange<<"-"<<phone1.number<<endl;
	cout<<"Your number is ("<<phone2.areaCode<<") "<<phone2.exchange<<"-"<<phone2.number<<endl;
	cout<<endl;
	return 0;
}
