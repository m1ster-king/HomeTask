#include <iostream>
#include "heading.h"

int main()
{
    int n = 0;
    std::cout << "Input order of matrix: ";
    std::cin >> n;
    int* matrix = new int[n * n];
    std::cout << "Input Matrix: " << std::endl;
    for (int i = 0; i < n * n; ++i) {
        int a;
        std::cin >> a;
        matrix[i] = a;
    }
    std::cout << "Determinant = " << GetDeterminant(matrix, n) << std::endl;
    delete[] matrix;
}