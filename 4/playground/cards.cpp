#include <iostream>
using namespace std;
struct Card {
	int number;
	int suit;
};
const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades =  3;

const int jack = 11;
const int queen  = 12;
const int king = 13;
const int ace = 14;

int main(){
	Card chosen, temp, prize;	
	Card card1 = {7, spades},
	     card2 = {jack , hearts},
	     card3 = {5, diamonds};
	prize = card3;
	int chose;
	cout<<"Card 1 is 7 of spades"<<endl;
	cout<<"Card 1 is jack of hearts"<<endl;
	cout<<"Card 3 is 5 of diamonds"<<endl;
	cout<<"I am switching card 1 and card 3"<<endl;
	temp = card3; card3 = card1; card1 =  temp;
	cout<<"I am switching card 2 and card 3"<<endl;
	temp = card3; card3 = card2; card2 =  temp;
	cout<<"I am switching card 1 and card 2"<<endl;
	temp = card2; card2 = card1; card1 =  temp;
	cout<<"Which card was 5 of diamonds: ";
	cin>>chose;
	switch(chose){
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
		default: cout<<"No suck option exists"; return -1; break;
	}
	if(prize.number == chosen.number && prize.suit == chosen.suit)
		cout<<"Congratulations you won";
	else
		cout<<"Fuck off";
	cout<<endl;
	return 0;
}
