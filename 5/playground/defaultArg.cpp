#include <iostream>
using namespace std;
void repChar(int xlol = 45, char cunt = '*');
int main(){
	repChar();
	repChar(35);
	repChar(70, '&');
	cout<<endl;
	return 0;
}
void repChar(int x, char c){
	for(int i = 0; i < x ; i++){
		cout<<c;
	}
	cout<<endl;
}
