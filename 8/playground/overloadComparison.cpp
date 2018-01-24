#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance():feet(0), inches(0.0F){}
		Distance(int ft, float in):feet(ft), inches(in){}
		void showDist();
		bool operator > (Distance);
		bool operator < (Distance);
		void operator +=(Distance);
};
void Distance::showDist(){
	cout<<feet<<"\' "<<inches<<"\" ";
}
bool Distance::operator > (Distance d){
	float x = feet + inches/12;
	float y = d.feet + d.inches/12;
	return (x > y ? true : false);
}
bool Distance::operator < (Distance d){
	float x = feet + inches/12;
	float y = d.feet + d.inches/12;
	return (x < y ? true : false);
}
void Distance::operator +=(Distance d){
	feet+=d.feet;
	inches+=d.inches;
	if(inches>=12){
		feet+=inches/12;
		inches%=12;
	}
}
int main(){
	Distance a(5, 4.5);
	Distance b(3, 5.12);
	cout<<(a>b);
	cout<<(a<b);
	a+=b;
	a+=b;
	cout<<endl;
	return 0;
}
