#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int inp; 
	cout<<"Enter the number of rowstill which you want to print the pyramid: ";
	cin>>inp;
	for(int i = 0; i < inp; i++){
		cout<<setw(inp-i);
		for(int j = 0; j < 2*i+1; j++){
			cout<<"X";
		}	
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
