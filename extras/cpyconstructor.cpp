#include <iostream> 
class Copy {
	public:
	int a; 
	int *bPtr;
	Copy():a(69),bPtr(new int(42)){
	}
	Copy(const Copy &c) {
		std::cout << "User defined copy constructor created" << std::endl;
		this->a = c.a; 
		this->bPtr = new int(*c.bPtr);
	}
	~Copy(){
		delete bPtr; 	
	}

};

int main(){
	Copy x; 
	std::cout << x.a << " " << *x.bPtr << std::endl;
	Copy y = x;
	y.a = 5; 
	*y.bPtr = 10;
	std::cout << x.a << " " << *x.bPtr << std::endl;
	std::cout << y.a << " " << *y.bPtr << std::endl;
	std::cout << "Dealing with x and z" << std::endl;
	Copy z; 
	z = x;			//No copy constructor called here, bit by bit assignment done 
	z.a =  5; 
	*z.bPtr = 4334;
	std::cout << x.a << " " << *x.bPtr << std::endl;
	std::cout << z.a << " " << *z.bPtr << std::endl;
}
