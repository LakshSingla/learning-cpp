#include <iostream>
using namespace std;
struct Distance{
	int feet; 
	float inches;
};
struct Volume{
	Distance length;
	Distance width;
	Distance height;
}volume;
int main(){
	volume = {
		{4, 10}, 
		{5, 2}, 
		{6, 7}
	};
	float len, wid, ht;
	len = volume.length.feet + volume.length.inches/12;
	wid = volume.width.feet + volume.width.inches/12;
	ht  = volume.height.feet + volume.height.inches/12;
	cout<<"Volume of the room is: "<<(len* wid* ht);
	cout<<endl;
	return 0;
}
