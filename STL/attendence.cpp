#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

int main () {
	std::vector<std::pair<std::string, int>> attendence_register {
		{"A", 42},
		{"B", 55},
		{"c", 52},
		{"d", 35},
		{"E", 60},
	};
	std::sort (attendence_register.begin(), 
			attendence_register.end(),
			[](std::pair<std::string, int> less, std::pair<std::string, int> more) -> bool {
				return less.second > more.second;
			}
			);

	std::cout << "Attendence of children in decreasing order: " << std::endl;
	for (const auto& elem : attendence_register) {
		std::cout << elem.first << " : " << elem.second << std::endl;
	}
}
