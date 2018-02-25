#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int mainArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 6, 5, 2, 4 };
    int toSearch = 5;	
    const int mainLENGTH     = sizeof(mainArray)/sizeof(int);

    const int *MATCHEDADDRESS = find(mainArray, mainArray + mainLENGTH, toSearch);

    cout<<"Offset of the first found element: "<< (MATCHEDADDRESS - mainArray);

    cout<<endl;
    return 0;

}
