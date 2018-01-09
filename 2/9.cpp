//Important to demonstrate use of cascading
//cin input operators

#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	char DUMMY = '/';
	cout<<"Enter the first fraction of the form a/b: ";
	cin>>a>>DUMMY>>b;
	cout<<"Enter the second fraction of the form c/d: ";
	cin>>c>>DUMMY>>d;
	cout<<"Sum of the fractions is : "<<(a*d)+(b*c)<<"/"<<b*d;
	cout<<endl;
	return 0;
}
