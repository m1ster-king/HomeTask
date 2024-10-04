#include <iostream>
#include "DynamicArr.h"

int main() {
	DynamicArr arr1;
	DynamicArr arr2;
	for (int i = 0; i < 5; ++i) {
		arr1.push_back(i);
	}
	arr2 = arr1;
	std::cout << "arr1 = ";
	arr1.PrintDynamicArr();
	std::cout << "arr2 = ";
	arr2.PrintDynamicArr();

	for (int i = 0; i < 5; i+=2) {
		std::cout << arr1[i] << " ";
	}
	return 0;
}