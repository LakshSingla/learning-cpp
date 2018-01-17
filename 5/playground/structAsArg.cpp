#include <iostream>
using namespace std;
struct Distance{
	int feet;
	float inches;
};
void displayDist(Distance s);
int main(){
	Distance dist1, dist2; 
	dist1 = {5, 6.42}, dist2 = {5, 9.3231};
	displayDist(dist1);
	displayDist(dist2);
	cout<<endl;
	return 0;
}
void displayDist(Distance d){
	cout<<d.feet<<"\' "<<d.inches<<"\" ";
	cout<<endl;
}
