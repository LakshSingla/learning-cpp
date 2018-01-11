#include <iostream>
using namespace std;
int main(){
	struct part{
		int model; int part; float cost;	
	};
	part part1;
	part1 = {156, 23, 422.02};
	part part2 = part1;
	cout<<part2.model<<" "<<part2.part<<" "<<part2.cost<<" ";
	cout<<endl;
	return 0;
}
