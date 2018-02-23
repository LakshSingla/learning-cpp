#include <iostream> 

using namespace std; 

void level1(void); 
void level2(void); 

int main(){

	try{
		level2();
	}catch(int x){
		cout<<endl;
		cout<<"Error code: "<<x;
		cout<<endl;
		cout<<"Some error was propogated by the level2 function too";
	}

	cout<<endl;
	return 0;
}

void level1(void){

	cout<<"Inside the level1 function call\n";
	throw 0;

}

void level2(void){
	
	cout<<"Inside the level2 function call\n";

	try{
		level1();
		cout<<"This must not get output"<<endl;
	}catch(int x){
		cout<<"Error code: "<<x;
		cout<<endl;
		cout<<"Handled the level1 error inside the level2 function"	;
		throw 1;
	}

}