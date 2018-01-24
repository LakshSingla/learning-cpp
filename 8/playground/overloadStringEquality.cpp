#include <iostream>
#include <string.h>
using namespace std;
class userString{
	private:
		const int SIZE;
		char str[80];
	public:
		userString(): SIZE(80){}
		userString(char s[]):SIZE(80){
			strcpy(str, s);
		}
		void display() const{
			cout<<str;
		}
		void getStr(){
			cin.get(str, SIZE);
		}
		bool operator == (userString);
			
};
bool userString::operator == (userString us){
	return (strcmp(str, us.str)==0?true:false);
}
int main(){
	userString a("KKHi");
	userString b("KKHi");
	userString c("KKHj");
	cout<<boolalpha;
	cout<<(a==c);
	cout<<(a==b);
	cout<<endl;
	return 0;
}
