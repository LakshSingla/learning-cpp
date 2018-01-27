#include <iostream>
using namespace std;
void inpArr(int*, const int);
void outArr(int*, const int);
int main(){
	int n;
	cin>>n;		
	const int N = n;
	int arr[N];
	cout<<n<<N<<endl;
	inpArr(arr, N);
	outArr(arr, N);
	cout<<endl;
	return 0;
}
void inpArr(int* a, const int SIZE){
	for(int x = 0; x < SIZE; x++){
		cin>>a[x];
	}
}
void outArr(int* a, const int SIZE){
	for(int x = 0; x < SIZE; x++){
		cout<<*(a + x)<<"\t";
	}
}
