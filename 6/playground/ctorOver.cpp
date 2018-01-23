#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance(): feet(0), inches(0){cout<<"Inside default constructors body";}
		Distance(int ft, float in) : feet(ft), inches(in) {
			cout<<"Inside the constructor body";
		}
		void addDistance(Distance, Distance);
		void showDistance(){
			cout<<feet<<"\' "<<inches<<"\" ";
		}
};
void Distance::addDistance(Distance d1, Distance d2){
	int carry = 0;
	inches = d1.inches + d1.inches;	
	if(inches>=12){
		inches-=12;
		carry++;
	}
	feet = carry + d1.feet + d2.feet;
}
int main(){
	Distance x(5, 7.32), y(3, 8.94), z(9, 5.23);
	Distance w;
	z.addDistance(x, y);
	cout<<"\n";
	z.showDistance();
	cout<<endl;
	return 0;
}
