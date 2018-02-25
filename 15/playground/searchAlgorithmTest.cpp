#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int mainArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int toSearch[] = {3, 4, 5, 6, 7};	
	const int mainLENGTH     = sizeof(mainArray)/sizeof(int);
	const int toSearchLENGTH = sizeof(toSearch) /sizeof(int);

	const int *MATCHEDADDRESS = search(mainArray, mainArray + mainLENGTH, toSearch, toSearch + toSearchLENGTH );

	cout<< MATCHEDADDRESS - mainArray;

	cout<<endl;
	return 0;
}
