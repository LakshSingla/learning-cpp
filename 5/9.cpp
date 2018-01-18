#include <iostream>
using namespace std;

struct Time{
	int hr;
	int min;
	int sec;
};

void swap(Time&, Time&);
void showTime(Time);

int main(){
	Time a, b;
	a = {1, 2, 3};
	b = {4, 5, 6};
	swap(a,b);
	cout<<"Values of A and B are now: ";
	showTime(a);cout<<" ";showTime(b);
	cout<<endl;
	return 0;
}

void swap(Time&x, Time&y){
	Time temp = x; 
	x = y;
       	y = temp;
}

void showTime(Time t){
	cout<<t.hr<<":"<<t.min<<":"<<t.sec;
}

