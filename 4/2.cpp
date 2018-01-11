#include <iostream>
using namespace std;
struct Point{
	int x;
	int y;
}point1, point2, point3;
int main(){
	cout<<"Enter the coordinates for p1: ";
	cin>>point1.x>>point1.y;
	cout<<"Enter the coordinates for p2: ";
	cin>>point2.x>>point2.y;
	point3.x = point1.x + point2.x;
	point3.y = point1.y + point2.y;
	cout<<"Coordinates of p1 + p2 are: "<<point3.x<<", "<<point3.y;
	cout<<endl;
	return 0;
}
