#include <iostream>
using namespace std;
class Counter{
	private:
		int ctr;
	public:
		Counter(): ctr(0){}
		Counter(int x): ctr(x){}
		void showCtr() const;
		void assignCtr(int);
		Counter operator ++ ();
		Counter operator ++ (int);
		Counter operator + (int);
		Counter operator + (Counter);
};
Counter Counter::operator ++ (){
	return Counter(++ctr);
}
Counter Counter::operator ++ (int){
	return Counter(ctr++);
}
void Counter::showCtr() const{
	cout<<ctr;
}
void Counter::assignCtr(int x){
	ctr = x;
}
Counter Counter::operator + (int x){
	return Counter(ctr + x);	
}
Counter Counter::operator + (Counter x){
	return Counter(ctr + x.ctr);
}

int main(){
	Counter a, b(10);
	++a;
	++a;
	++a;
	++b;
	a.showCtr();
	cout<<endl;
	b.showCtr();
	a = ++b;
	cout<<endl;
	a.showCtr();
	cout<<endl;
	b.showCtr();
	cout<<endl;
	a.assignCtr(45);
	b.assignCtr(90);
	a = b++;
	a.showCtr();
	cout<<endl;
	b.showCtr();
	cout<<endl;
	b = a+5;
	a.showCtr();
	cout<<endl;
	b.showCtr();
	cout<<endl;
	b = a + b;
	a.showCtr();
	cout<<endl;
	b.showCtr();
	cout<<endl;
	return 0;
}
