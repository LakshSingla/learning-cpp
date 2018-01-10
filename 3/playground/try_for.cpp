#include <iostream>
using namespace std;
int main(){
	for(int i = 1; i <=10; i++){
		cout<<i<<endl;
		if(i%2){
			continue;
		}
		cout<<i<<endl;
	}
	cout<<endl;
	return 0;
}
