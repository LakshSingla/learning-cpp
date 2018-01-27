#include <iostream>
using namespace std;
struct Link {
	int data;
	Link *next;
};

class LinkList{
	private: 
		Link *first;
	public:
		LinkList():first(NULL){}
		void addItem(int );
		void displayList();
};

void LinkList::addItem(int d){
	Link *newLink = new Link;
	newLink -> data = d;
	newLink -> next = first;
	first = newLink;
}

void LinkList::displayList(){
	Link *current = first;
	while(current != NULL){
		cout<<current -> data; 	
		if(current->next!=NULL) cout<<"-->";
		current = current -> next;
	}
}

int main(){
	LinkList li;
	li.addItem(25);
	li.addItem(36);
	li.addItem(45);
	li.addItem(43);
	li.displayList();
	cout<<endl;
	return 0;
}
