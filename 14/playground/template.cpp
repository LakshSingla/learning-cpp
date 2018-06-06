#include <iostream>

using namespace std;

template <class T>
T randomVar( T arg ) { return arg; }

int main() { 
	cout<<sizeof(randomVar(5))<<endl;
	cout<<sizeof(randomVar(5.9))<<endl;
	cout<<sizeof(randomVar(5.9f))<<endl;
	return 0;
}
