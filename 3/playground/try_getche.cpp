#include <iostream>
#include "curses.h"
using namespace std;
int main(){
	char x ;
	int ct = 0;
	do{
		x = getch();
		ct++;
	}while(x!='\r');
	cout<<endl<<endl<<ct;
	cout<<endl;
	return 0;
}
