#include <iostream>
using namespace std;
struct Time{
	int hour;
	int min;
	int sec;
};

long int timeToSecs(Time);
Time secsToTime(long int);

int main(){
	long int x = 102304;
	Time y = secsToTime(x);
	cout<<y.hour<<":"<<y.min<<":"<<y.sec;
	cout<<endl;
	cout<<timeToSecs(y);
	cout<<endl;
	return 0;
}

long int timeToSecs(Time t){
	return t.hour*3600 + t.min*60 + t.sec;	
}

Time secsToTime(long int s){
	int ch = s / 3600;
	s%=3600;	
	int cm = s / 60;
	s%=60;
	return {ch, cm, static_cast<int>(s)};
}
