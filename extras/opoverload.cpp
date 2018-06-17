#include <iostream>

class B; 

class A {
	private:
	int m_a;
	public:
	A(int a):m_a(a){}
	int get() {return m_a;}
	friend bool operator >(A, B);
	friend bool operator >(B, A);
};

class B{
	private:
	int m_b;
	public:
	B(int b):m_b(b){}
	int get() {return m_b;}
	friend bool operator >(A, B);
	friend bool operator >(B, A);
};

bool operator > (A a, B b) { return a.get() > b.get();}
bool operator > (B b, A a) { return b.get() > a.get();}

int main(){
	A a(5); 
	B b(10);
	std::cout<< (b > a) ;
}
