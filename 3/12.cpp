#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	char operation;
	int resNum, resDen;
	char dummy;
	char cont = 'y';
	do{
	cout<<"Enter the operation you want to perform as a/b <operator> c/d: ";
	cin>>a>>dummy>>b>>operation>>c>>dummy>>d;
	switch(operation){
		case '+':
			resNum = a*d + b*c;
			resDen = b*d;
			break;
		case '-':
			resNum = a*d - b*c;
			resDen = b*d;
			break;
		case '*':
			resNum = a*c;
			resDen = b*d;
			break;
		case '/':
			resNum = a*d;
			resDen = b*c;
			break;
		default:
			cout<<"Valid operation not entered"<<endl;
			continue;
			break;
	}
	cout<<"The result is: "<<resNum<<" / " <<resDen;
	cout<<endl<<"Do you want to continue(y/n)";
	cin>>cont;
	}while(cont=='y');
	cout<<endl;
	return 0;
}
