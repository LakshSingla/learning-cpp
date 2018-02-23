#include <iostream>
using namespace std;
int main(){

    int x[5] = {1, 3, 5, 7, 9 };
    int *aPtr;
    int *bPtr;
    bPtr = x;
    aPtr = &x[2];
    cout<<aPtr<<endl;
    aPtr++;
    cout<<aPtr<<endl;
    cout<<(bPtr - aPtr);
	cout<<endl;
	return 0;

}
