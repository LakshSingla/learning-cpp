#include <iostream>

using namespace std;

int main(){

	char firstCh;
	cin.get(firstCh);
	for(int x = 0; x < 10; x++){
		char secondCh;
		secondCh = cin.peek();
		cout<<secondCh<<"\n";
	}

	cout<<firstCh;
	cout<<endl;
	return 0;
}
