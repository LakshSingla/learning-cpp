#include <iostream>
#include <string>

using namespace std;

void recPalindrome(string*, const int );

int main(){
    string s = "123456789";
    recPalindrome(&s, 0);
    cout<<s;
	cout<<endl;
	return 0;
}

void recPalindrome(string *strAddress, const int off){
    string str = *strAddress;
    const int LASTINDEX = str.length() - 1;
    char temp;

    if(off > LASTINDEX/2){
        return;
    }

    temp = str[off];
    str[off] = str[LASTINDEX - off];
    str[LASTINDEX - off] = temp;

    *strAddress = str;

    recPalindrome(strAddress, off + 1);
}