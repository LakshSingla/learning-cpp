#include <iostream>
using namespace std;

float circArea(float);

int main(){
	float radius;
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	cout<<"The area of the circle is "<<circArea(radius);
	cout<<endl;
	return 0;
}

float circArea(float radius){
	const float PI = 3.141;
	return radius * PI * PI;
}
