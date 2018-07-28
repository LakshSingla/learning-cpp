#include <algorithm>
#include <iostream>
#include <map>
#include <utility>

int main () {
	class compare {
		public:
			bool operator()(std::pair<std::string, int> less, std::pair<std::string, int> more) {
				return less.second > more.second;	
			}
	};
	std::multimap<std::string, int, compare> attendence_register {
		{"A", 42},
		{"B", 55},
		{"c", 52},
		{"d", 35},
		{"E", 60},
	};

	//std::sort (attendence_register.begin(), attendence_register.end());

	for (const auto& elem : attendence_register) {
		std::cout << elem.first << " : " << elem.second << std::endl;
	}
}
