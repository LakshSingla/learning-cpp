// During character extraction C++, std::cin ignores spaces
// as opposed to C style character extraction
#include <iostream>

int main(){
	char ch, temp; 
	std::cin >> ch; 
	std::cout << ch;
	scanf("%c%c",&temp, &ch);	
	std::cout << ch;
}
