#include <bitset>

constexpr char option0 (0x01);
constexpr char option1 (0x02);
constexpr char option2 (0x04);
constexpr char option3 (0x08);
constexpr char option4 (0x10);
constexpr char option5 (0x20);
constexpr char option6 (0x40);
constexpr char option7 (0x80);


int main(){


	std::bitset<8> bits (option0 | option1);
	return 0;
}
