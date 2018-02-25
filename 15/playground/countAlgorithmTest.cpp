#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int arr[] = {3, 3, 3, 5, 6, 7, 2, 3, 2, 2, 2, 3, 4, 5, 1 };
	const int arrLENGTH = sizeof(arr)/sizeof(int);

	cout<<"Number of 3s in the arary: "<<count(arr, arr+ arrLENGTH, 3);

	cout<<endl;
	return 0;
}
