#include <iostream>
using namespace std;
const int LIMIT = 100;

class safeArr{
	private:
		int dum;
		int x[LIMIT];
	public:
		int getel(int n);
		void putel(int n, int value);
		int& access(int n);
		int& operator [] (int n);
	
};

int safeArr::getel(int n){
	if(n>=0 && n < LIMIT){
		return x[n];
	}
	cout<<"Out of bounds\n";
	return -1;
}

void safeArr::putel(int n, int value){
	if(n>=0 && n < LIMIT){
		x[n] = value;
		return; 
	}
	cout<<"Out of bounds\n";
	return;
}

int& safeArr::access(int n){
	if(n>=0 && n <LIMIT){
		return x[n];
	}
	cout<<"Out of bounds\n";
	return dum;
}

int& safeArr::operator [] (int n){
	if(n>=0 && n < LIMIT)	{
		return x[n];
	}
	cout<<"Out of bounds\n";
	return dum;
}

int main(){
	safeArr a; 
	a.putel(5, 100);
	a.putel(800, 100);
	a.putel(6, 150);
	cout<<a.getel(5)<<" "<<a.getel(6);
	a.access(3) = 25;
	a.access(5) = 125;
	a.access(500) = 125;
	cout<<a.access(3)<<" "<<a.access(5)<<" "<<a.access(6);
	a[1] = 5;
	a[10] = 50;
	a[100] = 600;
	cout<<endl<<endl<<a[1]<<" "<<a[10]<<" "<<a[100];
	cout<<endl;
	return 0;
}
