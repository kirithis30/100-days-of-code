// Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int size;
    int i, j;
    int isSymmetric = 1;
    
    printf("--- Symmetric Matrix Checker ---\n");

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
        for (j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nResult: The matrix is Symmetric.\n");
    } else {
        printf("\nResult: The matrix is NOT Symmetric.\n");
    }

    return 0;
}