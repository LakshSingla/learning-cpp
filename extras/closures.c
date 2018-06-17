#include <stdio.h>

int testInside(){
	extern int a;
	printf("%d", a);

}

int testOutside(){
	int a = 4;
	testInside();
}

int main(){
	testOutside();
	return 0;
}
