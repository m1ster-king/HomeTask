#include "heading.h"

int GetDeterminant(int matrix[], int n) {
    if (n == 1) {
        return matrix[0];
    }
    int result = 0;
    for (int x = 0; x < n; ++x) {
        int* smallMatrix = new int[(n - 1) * (n - 1)];
        int k = 0;
        for (int i = 1;i < n; ++i) {
            for (int j = 0;j < n;++j) {
                if (j != x) {
                    smallMatrix[k] = matrix[i * n + j];
                    k += 1;
                }
            }
        }
        if (x % 2 == 0) {
            result += matrix[x] * GetDeterminant(smallMatrix, n - 1);
        }
        else {
            result -= matrix[x] * GetDeterminant(smallMatrix, n - 1);
        }
        delete[] smallMatrix;
    }
    return result;
}