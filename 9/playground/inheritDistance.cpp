#include <iostream>
using namespace std;

enum Sign {pos, neg} ;

class Distance{
	int feet;
	float inches;
	public:
		Distance():feet(0), inches(0.0){
			cout<<"Invoking Distance() constructor\n";
		}
		Distance(int ft, float in):feet(ft), inches(in){
			cout<<"Invoking Distance(int, float) constructor\n";
		}	
		void getDist(int, float);
		void showDist() const;
			
};
void Distance::getDist(int in, float ft){
	inches = in; feet = ft;	
}

void Distance::showDist() const {
	cout<<feet<<"\' "<<inches<<"\" "<<endl;
}

class DistSign: public Distance {
	private: 
	       Sign sign;	
	public:
	       DistSign():Distance(),sign(pos){
	       		cout<<"Invoking DistSign() constructor\n";
	       }
	       
	       DistSign(int in, float ft):Distance(in,ft), sign(pos){
	       		cout<<"Invoking DistSign(int, float) constructor\n";
	       }
		DistSign(int in, float ft, Sign sg):Distance(in, ft), sign(sg){
	       		cout<<"Invoking DistSign(int, float, Sign) constructor\n";
	       }
		void getDist(int , float , Sign);
		void showDist() const;
};

void DistSign::showDist() const{ 
	cout<<((sign==pos) ? '+' : '-');
	Distance::showDist();
}

void Distance::getDist(int in, float ft, Sign sg) {
	sign = sg;
	Distance::getDist(in, ft);
} 

int main(){
	Distance x; 
	DistSign y;
	DistSign z(5, 6.9);
	DistSign w(5, 6.9, neg);
	x.showDist();
	y.showDist();
	z.showDist();
	w.showDist();
	x.getDist(5, 6.0);
	cout<<endl;
	return 0;
}
