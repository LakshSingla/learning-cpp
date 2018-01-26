#include <iostream>
using namespace std;
int main(){
	int x = 5;
	{
		int x = 10;
		{
			int x = 15;
			cout<<x;
		}
	}
	cout<<endl;
	return 0;
}
