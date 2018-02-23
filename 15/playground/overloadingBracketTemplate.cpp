#include <iostream>
using namespace std;

template <class aType>
class PairedData{
	private:
	aType a, b;
	public:	

	PairedData(aType x, aType y){setData(x,y);}

	void setData(aType x, aType y){ a = x; b = y;}

	int operator () (aType x, aType y) {
		cout<<(a > b ? a : b ) << "\n" << x << "\n" << y;
		return -1;
	}
};

int main(){
	PairedData<float> obj(5.7, 4.3);
	obj(6.9, 7.89);
	cout<<endl;
	return 0;
}
