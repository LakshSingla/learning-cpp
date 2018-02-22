#include <iostream>
using namespace std;

template <class A>
int search(A *arr, A find, int size){
	for(int i = 0; i < size; i++){
		if(*(arr+i) == find) return i;
	}	
	return -1;
}

int main(){
	int intArr[] = {1, 3, 5, 9};
	char charArr[] = {'a', 'c', 'e', 'g'};
	bool boolArr[] = {true, true, false, true};
	cout<<search(intArr, 5, 4)<<endl;
	cout<<search(charArr, 'g', 4)<<endl;
	cout<<search(charArr, 't', 4)<<endl;
	cout<<search(boolArr , true, 4)<<endl;
	cout<<endl;
	return 0;
}
