#include <iostream>
using namespace std;

struct Distance{
	int feet;
	float inches;
};

Distance lrgDistance(Distance, Distance);

int main(){
	Distance x, y;
	x = {5, 7.324}, y = {6, 9.321};
	Distance result = lrgDistance(x, y);
	cout<<"Larger of 2 distances has FEET: " <<result.feet<<" INCHES: "<<result.inches;
	cout<<endl;
	return 0;
}

Distance lrgDistance(Distance a , Distance b){
	float ac = a.feet + a.inches/12;
	float bc = b.feet + b.inches/12;
	return (ac > bc) ? a : b; 
}
