//https://projecteuler.net/problem=44
//WAP to find 2 pentagonal nos such that their sum and difference is a
//Pentagonal number itself and the difference is minimised 

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int findPentagonal(int );
bool isPentagonal(long double);

const int MAX = 10000;

int main(){
    int x, y;
    int min = greatest;
    for(int i = 2; i <= MAX ; i++) {
        int greaterPentagon = findPentagonal(i);
        for(int j = i - 1 ; j > 0; j--){
            int lowerPentagon = findPentagonal(j);
            if(isPentagonal(greaterPentagon - lowerPentagon) && isPentagonal(greaterPentagon + lowerPentagon)){
                y = j;
                found = true;
                break;
            }
        }
        if(found){
            x = i;
            break;
        }
    }

    cout<<findPentagonal(y) << " " << findPentagonal(x);
	cout<<endl;
	return 0;
}


int findPentagonal(int n){
    return (n * (3 * (n - 1)))/2;
}

bool isPentagonal(long double no){
    float n = (1 + sqrt(1 + 24 * no)) / 6 ;
    if(static_cast<int>(n) == n){
        return true;
    }
    return false;
}