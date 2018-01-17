#include <iostream>
using namespace std;
struct Distance{
	int feet;
	float inches;
};

void showDistance(Distance);
void showDistance(float);

int main(){
	showDistance({43, 3.2135}); 
	showDistance(3.2135); 
	cout<<endl;
	return 0;
}

void showDistance(Distance dist){
	cout<<dist.feet<<"\' "<<dist.inches<<"\" ";
	cout<<endl;
}

void showDistance(float dist){
	int feet = static_cast<int>(dist);
	float inches = (dist - feet) *12;
	cout<<feet<<"\' "<<inches<<"\" ";
	cout<<endl;
}

