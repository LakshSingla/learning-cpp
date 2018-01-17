#include <iostream>
using namespace std;
struct Distance{
	int feet;
	float inches;
};
void displayDistance(Distance);
void scaleDistance(Distance&, float);

int main(){
	Distance d1 = {5, 6.75};
	scaleDistance(d1, 2.00);
	displayDistance(d1);
	cout<<endl;
	return 0;
}

void displayDistance(Distance dist){
	cout<<dist.feet<<"\' "<<dist.inches<<"\" ";
}

void scaleDistance(Distance& dist,float  scale){
	int carry = 0;
	dist.inches *= scale;
	while(dist.inches>=12.00){
		dist.inches-=12.00;
		carry++;
	}
	dist.feet *= scale;
	dist.feet += carry;
}
