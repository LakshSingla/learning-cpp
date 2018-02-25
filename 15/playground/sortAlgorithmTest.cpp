#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
	int arr[] = {7, 4, 6, 1, 89, 2, 6, 2};
	const int arrLENGTH = sizeof(arr)/sizeof(int);

	sort(arr, arr + arrLENGTH);
	for(int i = 0 ; i < arrLENGTH; i++) cout<<*(arr +  i)<<"\t";

	cout<<endl;
	cout<<endl;

	sort(arr, arr + arrLENGTH, greater<int>() );
	for(int i = 0 ; i < arrLENGTH; i++) cout<<*(arr +  i)<<"\t";

	cout<<endl;
	return 0;

}
