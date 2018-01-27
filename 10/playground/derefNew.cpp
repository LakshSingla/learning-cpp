#include <iostream>
using namespace std;
class Distance{
	int feet;
	float inches;
	public:
	Distance():feet(0), inches(0.0){}
	Distance(int ft, float in):feet(ft), inches(in){}
	void setDist(int, float);
	void showDist();
};
void Distance::setDist(int ft, float in){feet = ft; inches = in;}
void Distance::showDist(){
	cout<<feet<<"\' "<<inches<<"\" "<<endl; 
}
int main(){
	Distance *dist1 = new Distance;
	Distance *dist2 = new Distance(1, 2.4);
	Distance& dist3  = *(new Distance);
	dist1 -> showDist();
	dist2 -> showDist();
	dist3.showDist();
	cout<<endl;
	return 0;
}
