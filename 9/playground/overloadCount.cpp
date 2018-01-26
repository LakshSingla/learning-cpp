#include <iostream>
using namespace std;
class Counter{
	protected:
		int count;
	public:
		Counter():count(0){}
		Counter(int ct):count(ct){}
		Counter operator ++ ();
		void showCount() const;
};

Counter Counter::operator ++ (){
	return Counter(++count);
}

void Counter::showCount(){
	cout<<count<<endl;
}

class CntDown:public Counter{
	public:
		CntDown():Counter(0){}
		CntDown(int x):Counter(x){}
		CntDown operator -- ();
};

CntDown CntDown::operator -- (){
	return CntDown(--count);
}
int main(){
	CntDown a(5);
	--a;
	++a;
	a.showCount();
	cout<<endl;
	return 0;
}
