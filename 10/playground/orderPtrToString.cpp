//Run as ./<ObjectName>.out < Name
//where Name is the input List along with y below each name
//except last and n below last name

#include <iostream>
#include <string>
const int MAX = 100;
using namespace std;
class Person{
	private:
		string name;
	public:
		void setName(string x){name = x;}
		string getName() const{return name;}
};
int main(){
	void bsort(Person**,const int);
	void displayArr(Person**,const int);
	Person *personPtrArr[MAX];
	int n = 0;
	char inp;
	do{
		string newPersonName;
		personPtrArr[n] = new Person;
		cout<<"Enter the name of the "<< n+1 <<" person: ";
		cin>>newPersonName;
		personPtrArr[n]->setName(newPersonName);
		cout<<"Do you want to enter a new person? (Y/N): ";
		cin>>inp;
		n++;
	}while(n!=MAX && inp=='y');
	displayArr(personPtrArr, n);
	bsort(personPtrArr, n);
	displayArr(personPtrArr, n);
	cout<<endl;
	return 0;
}

void displayArr(Person **personPtrArr, const int SIZE){
	cout<<"Displaying persons\n";
	for(int x = 0; x < SIZE; x++){
		cout<<personPtrArr[x]->getName()<<endl;
	}
}	

void bsort(Person **personPtrArr, const int SIZE){
	cout<<"Ordering persons\n";
	void order(Person*, Person*);
	for(int j = 0; j < SIZE-1; j++){
		for(int k = j + 1; k < SIZE; k++){
			order(personPtrArr[j], personPtrArr[k]);
		}
	}
}

void order(Person *a, Person *b){
	if(a->getName() > b->getName()){
		Person *temp = new Person;
		*temp = *a;
		*a = *b;
		*b = *temp;
		delete temp;
	}
}
