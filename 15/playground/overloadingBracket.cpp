#include <iostream>
using namespace std;

class PairedData{
	private:
	int a, b;
	public:	

	PairedData(int x, int y){setData(x,y);}

	int setData(int x, int y){ a = x; b = y;}

	int operator () (int x, int y) {
		cout<<(a > b ? a : b ) << "\n" << x << y;
		return -1;
	}
};

int main(){
	PairedData obj(5, 4);
	obj(6, 7);
	cout<<endl;
	return 0;
}
