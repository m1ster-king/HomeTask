#include <iostream>

int main() {
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	for (int i = 1; i <= number; ++i) {
		int j = i;
		while (j>0){
			std::cout << "*";
			--j;
		}
		std::cout << std::endl;
	}
	for (int i = number - 1; i > 0; --i) {
		int j = i;
		while (j > 0) {
			std::cout << "*";
			--j;
		}
		std::cout << std::endl;
	}
}

