#include <fstream>
#include <iostream>

using namespace std;

int main(){
	class Person{
		protected: 
		char name[80];
		short int age;
		
		public:
		void getData() {
			cout<<"Enter name: "; cin>>name;
			cout<<"Enter age : "; cin>>age ;
		}
	};
	Person pers;
	pers.getData();
	ofstream outfile("PERSON.dat", ios::binary);
	outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));
	return 0;
	cout<<endl;
	return 0;

}
