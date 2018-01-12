#include <iostream>
using namespace std;
void printAsSum(int, int, int);
int generatePrime(int);
bool isPrime(int);
void generateBachs(int, int);

int lowerLimit, upperLimit;

int main(){
	cout<<"Enter the lower limit of the number whos series you want to print: ";
	cin>>lowerLimit;
	cout<<"Enter the upper limit of the number whos series you want to print: ";
	cin>>upperLimit;
	generateBachs(lowerLimit, upperLimit);
	cout<<endl;
	return 0;
}

void printAsSum(int result, int addend1, int addend2){
	cout<<result<<" = "<<addend1<<" + "<<addend2;
}

int generatePrime(int lower){
	for(int x = lower+1; x ; x++){
		if(x>upperLimit){
			return -1;
		}	
		if(isPrime(x)){return x;} continue ;	
	}
	return -1;
}	

bool isPrime(int check){
	for(int i = 2; i < check; i++){
		if(check%i == 0){
			return false;
		}
	}	
	return true;
} 

void generateBachs(int lower, int upper){
	for(int x = lower; x <= upper; x++){
		if(x%2!=0){continue;}
		for(int i = 2; i <= x; i++){
			if(!isPrime(i)){
				continue;			
			}
			for(int j = 2; j <= x - i; j++){
				if(!isPrime(j)){continue;}
				if (i+j == x){
					printAsSum(x, i, j);
					cout<<endl;
				}
			}
		}
	}
}
