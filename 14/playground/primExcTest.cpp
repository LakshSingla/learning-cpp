#include <iostream>
#include <string>

using namespace std;

class ErrorClass{	
	private:
	string errorMessage;
	public:
	ErrorClass(string);
	void showError();
};

ErrorClass::ErrorClass(string errorMessage){
	ErrorClass::errorMessage = errorMessage;	
}

void ErrorClass::showError(){
	cout<<errorMessage;
}

class Test{
	public: 
	class ErrorThis{};
	Test(int);
};

Test::Test(int x){
	throw x;
}

int main(){
	try{
		Test(5);
	}catch(int err){
		cout<<"Into the error statement";
		//cout<<endl<<err;
	}
	cout<<endl;
	return 0;
}
