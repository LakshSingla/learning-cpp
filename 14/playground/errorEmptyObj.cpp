#include <iostream>
using namespace std;

class Test{
	private: 
		int x; 
	public:
		class ErrorClass{};
		void someFunc(){
			cout<<"This is working";
			throw ErrorClass();
		}
};

int main(){
	Test obj;
	try{
		obj.someFunc();
		cout<<"Should not be printed";
	}catch(Test::ErrorClass){
		cout<<"In the error block";
	}	
	cout<<endl;
	return 0;
}
