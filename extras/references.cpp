#include <iostream>

void printSize(int (*a)[5]){
	std::cout<<static_cast<int>(sizeof(a))/sizeof(a[0])<<std::endl;
}

void printSizeRef(int(&arr)[5]){
	std::cout<<sizeof(arr)/sizeof(arr[0])<<std::endl;
}

int main(){
	int arr[]{1, 2, 3, 4, 5};
	printSize(&arr);
	printSizeRef(arr);
}
