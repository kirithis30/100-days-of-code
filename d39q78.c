// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int size;
    int i, j;
    long long diagonalSum = 0;
    
    printf("--- Main Diagonal Sum Calculator ---\n");

    printf("Enter the size of the square matrix (N x N, max 10): ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > 10) {
        printf("Invalid input. Please enter a positive integer for size (max 10).\n");
        return 1;
    }

    int matrix[size][size];

    printf("\nEnter the elements of the %d x %d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    printf("\n--- Entered Matrix ---\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("\nResult: Sum of the Main Diagonal Elements is %lld\n", diagonalSum);

    return 0;
}