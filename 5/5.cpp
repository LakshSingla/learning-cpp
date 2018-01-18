#include <iostream>
using namespace std;
long int hmsToSecs(int, int, int);
int main(){
	char Dummy;
	int h, m, s;
	cout<<"Please enter time as: HH:MM:SS - ";
	cin>>h>>Dummy>>m>>Dummy>>s;
	cout<<"Total time in seconds is: "<< hmsToSecs(h,m,s);
	cout<<endl;
	return 0;
}

long int hmsToSecs(int h, int m , int s){
	return h *3600 + m *60 + s;
}
