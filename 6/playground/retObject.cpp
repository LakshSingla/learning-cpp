#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance(): feet(0), inches(0){}
		Distance(int ft, float in) : feet(ft), inches(in) {}
		Distance addDistance(Distance, Distance) const;
		void showDistance(){
			cout<<feet<<"\' "<<inches<<"\" ";
		}
};
Distance Distance::addDistance(Distance d1, Distance d2) const{
	int carry = 0;
	float temp = d1.inches + d2.inches;	
	if(temp>=12){
		temp-=12;
		carry++;
	}
	int tmpFeet = carry + d1.feet + d2.feet;
	Distance objTemp(tmpFeet, temp);
	return objTemp;
}
int main(){
	Distance x(5, 1.32), y(3, 8.94), z(9, 5.23);
	Distance w;
	w = z.addDistance(x,y);
	cout<<"\n";
	w.showDistance();
	cout<<endl;
	z.showDistance();
	cout<<endl;
	return 0;
}
