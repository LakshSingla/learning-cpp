#include <iostream>
using namespace std;
enum Etype{
	laborer, secretary, manager, accountant, executive, researcher
}empType;
int main(){
	char inp;
	int enumInp;
	cout<<"Enter the employee type(first letter only): ";
	cout<<"\nLaborer, Secretary, Manager, Accountant, Executive, Researcher: ";
	cin>>inp;
	switch(inp){
		case 'l':
			enumInp = 0;
			break;
		case 's':
			enumInp = 1;
			break;
		case 'm':
			enumInp = 2;
			break;
		case 'a':
			enumInp = 3;
			break;
		case 'e':
			enumInp = 4;
			break;
		case 'r':
			enumInp = 5;
			break;
		default: 
			cout<<"No input is entered";
			return -1;
			break;
	}
	empType = (Etype)enumInp;
	switch(empType){
		case 0: 
			cout<<"Employee type is laborer.";
			break;
		case 1:  
			cout<<"Employee type is secretary.";
			break;
		case 2:
			cout<<"Employee type is manager.";
			break;
		case 3:
			cout<<"Employee type is accountant.";
			break;
		case 4:
			cout<<"Employee type is executive.";
			break;
		case 5:
			cout<<"Employee type is researcher.";
			break;
		default: 
			cout<<"No input is entered";
			break;
	}
	cout<<endl;
	return 0;
}
