#include <iostream>
#include <string.h>
using namespace std;
class usString{
	private:
		enum {SIZE=80};
		char str[SIZE];
	public:
		usString(){}
		usString(char c[]){strcpy(str, c);}
		//void changeString(char ch[]){str = ch;}
		void displayString(){cout<<str;}
		void inputString(){
			cin.get(str, SIZE);
		}
		usString operator + (usString);
		usString operator += (usString);

};
usString usString::operator + (usString us){
	if(strlen(str) + strlen(us.str) >= SIZE){
		cout<<"Overflow error";
		return usString(str);
	}	
	usString temp;
	strcpy(temp.str, str);
	strcat(temp.str, us.str);
	return temp;

}
usString usString::operator += (usString us){
	if(strlen(str) + strlen(us.str) >= SIZE){
		cout<<"Overflow error";
		return usString(str);
	}	
	usString temp;
	strcpy(temp.str, str);
	strcat(temp.str, us.str);
	return temp;

}
int main(){
	usString a("Hello");
	usString b("+Bye");
	a += b;
	a.displayString();
	cout<<endl;
	return 0;
}
