#include <iostream>

using namespace std;

class Test{
	public:
	Test(){cout<<"Constructor of the class is called\n";}
	~Test(){cout<<"Destructor of the class is called\n";}
};

int main(){
	try{
		Test obj;
		throw 5;
	}catch(int){
		cout<<"Inside the catch block";
	}
	cout<<endl;
	return 0;

}