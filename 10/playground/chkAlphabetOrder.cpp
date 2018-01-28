#include <iostream>
#include <string>
using namespace std;
bool isGreater(string, string);
int main(){
	cout<<isGreater("Hi", "Bye");
	cout<<isGreater("Al", "Bye");
	cout<<endl;
	return 0;
}
bool isGreater(string x, string y){ return x > y;}
