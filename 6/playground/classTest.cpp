#include <iostream>
using namespace std;
class Counter{
	private:
       		unsigned int counter;
	public:
		Counter(): counter(8) {} 
		unsigned int getCounter(){ return counter;}
};
int main(){
	Counter c; 
	cout<<c.getCounter();
	cout<<endl;
	return 0;
}
