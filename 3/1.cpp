#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int noOfRows = 10;
	cout<<"Enter the number of rows till which you want to table: ";
	cin>>noOfRows;
	for(int x = 0; x < noOfRows; x++){
		for(int y = 0; y < 10; y++){
			cout<<setw(6)<<7*((y+1)+10*x);
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
