#include <iostream>
#include <thread>
#include <chrono>

int main () {
	for(int i = 0; i < 5; i++) {
		std::cout << i << " "; 
		std::this_thread::sleep_for(std::literals::chrono_literals::1s);
	}
}
