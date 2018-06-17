#include <iostream>

enum Test{
	RED, BLUE, 	
};

enum Test2{
	PURPLE, MAGENTA
};

void Foo(){
	enum Test{
		BLUE, RED
	};
 	int x = RED;
}

void Boo(){
	enum Test{RED, GREEN};
}

int main(){
	Test x = static_cast<Test>(MAGENTA);
	return 0;
}
