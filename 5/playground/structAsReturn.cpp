#include <iostream>
using namespace std;
struct Distance{
	int feet;
	float inches;
};
void displayDistance(Distance);
Distance addDistance(Distance, Distance);

int main(){
	Distance d1, d2, d3;
	d1 = {5, 0.3423};
	d2 = {7, 4.8937};
	d3 = addDistance(d1, d2);
	displayDistance(d3);
	cout<<" = ";
	displayDistance(d1);
	cout<<" + ";
	displayDistance(d2);
	cout<<endl;
	return 0;
}

void displayDistance(Distance dist){
	cout<<dist.feet<<"\' "<<dist.inches<<"\" ";
}

Distance addDistance(Distance d1, Distance d2){
	int carry = 0; 
	float inches = d1.inches + d2.inches;
	if(inches>=12.00){
		inches-=12.00;
		carry++;
	}
	int feet = d1.feet + d2.feet + carry;	
	return {
		feet,
		inches
	};
}
