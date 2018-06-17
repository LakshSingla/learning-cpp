#include <stdio.h> 

int add       (int x, int y) { return x + y; }
int subtract  (int x, int y) { return x - y; }
int multiply  (int x, int y) { return x * y; }

int main(){
	(int (*func_ptr) (int, int))[3] = {add, subtract, multiply};
	
	int handle; 

	scanf("%d", &handle);
	
	printf("%d\n", (func_ptr[handle-1])(10, 5));
}

