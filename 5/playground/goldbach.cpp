#include <iostream>
using namespace std;
void printAsSum(int, int, int);
bool isPrime(int);
void generateBachS(int, int);

int lowerLimit, upperLimit;

int main(){
	cout<<"Enter the lower limit of the number whos series you want to print: ";
	cin>>lowerLimit;
	cout<<"Enter the upper limit of the number whos series you want to print: ";
	cin>>upperLimit;
	generateBachS(lowerLimit, upperLimit);
	cout<<endl;
	return 0;
}

void printAsSum(int result, int addend1, int addend2){
	cout<<result<<" = "<<addend1<<" + "<<addend2;
}

bool isPrime(int check){
	if(check==0){
		return false;
	}
	for(int i = 2; i < check; i++){
		if(check%i == 0){
			return false;
		}
	}	
	return true;
} 

void generateBachS(int lower, int upper){
	for(int x = lower; x <= upper; x++){
		if(x%2!=0){continue;}
		for(int i = 2; i <= x; i++){
			if(!isPrime(i)){
				continue;			
			}
			if(isPrime(x-i)){
				printAsSum(x, i, x-i);
				cout<<endl;
			}
		}
	}
}
