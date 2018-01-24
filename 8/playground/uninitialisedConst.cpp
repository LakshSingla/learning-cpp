#include <iostream>
using namespace std;
class Test{
	private:
		const int a;
	public:
		Test():a(5){}
};
int main(){
	int n;
	Test alpha, beta;
	cin>>n;
	const int x = n ;
	cout<<x;
	cout<<endl;
	return 0;
}
