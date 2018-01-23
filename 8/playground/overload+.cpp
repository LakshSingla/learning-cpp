#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance(): feet(0), inches(0.0){}
		Distance(int ft, float in): feet(ft), inches(in){}
		void getDist(){
			cout<<"\nEnter feet: "; cin>>feet;
			cout<<"\nEnter inches: "; cin>>inches;
		}
		void showDist() const{
			cout<<feet<<"\' "<<inches<<"\" ";
		}
		Distance operator + (Distance) const;
};
Distance Distance::operator + (Distance d2) const{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if(i >= 12.0){
		i-=12;
		f++;
	}
	return Distance(f, i);
}
int main(){
	Distance x(5, 4.2);
	Distance y(6, 8.2);
	(x+y).showDist();
	cout<<endl;
	return 0;
}
