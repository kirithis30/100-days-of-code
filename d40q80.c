// Multiply two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;
    
    printf("--- Matrix Multiplication (A * B) ---\n");

    printf("Enter the number of rows for Matrix A (max 10): ");
    if (scanf("%d", &r1) != 1 || r1 <= 0 || r1 > 10) {
        printf("Invalid input for r1. Exiting.\n");
        return 1;
    }
    printf("Enter the number of columns for Matrix A (max 10): ");
    if (scanf("%d", &c1) != 1 || c1 <= 0 || c1 > 10) {
        printf("Invalid input for c1. Exiting.\n");
        return 1;
    }

    printf("Enter the number of rows for Matrix B (max 10): ");
    if (scanf("%d", &r2) != 1 || r2 <= 0 || r2 > 10) {
        printf("Invalid input for r2. Exiting.\n");
        return 1;
    }
    printf("Enter the number of columns for Matrix B (max 10): ");
    if (scanf("%d", &c2) != 1 || c2 <= 0 || c2 > 10) {
        printf("Invalid input for c2. Exiting.\n");
        return 1;
    }

    if (c1 != r2) {
        printf("\nError: Multiplication is not possible.\n");
        printf("The number of columns in A (%d) must equal the number of rows in B (%d).\n", c1, r2);
        return 1;
    }

    int matrixA[r1][c1];
    int matrixB[r2][c2];
    int resultMatrix[r1][c2];

    printf("\n--- Enter elements for Matrix A (%d x %d) ---\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter A[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrixA[i][j]) != 1) {
                printf("Invalid input. Exiting.\n");
                return 1;
            }
        }
    }

    printf("\n--- Enter elements for Matrix B (%d x %d) ---\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter B[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrixB[i][j]) != 1) {
                printf("Invalid input. Exiting.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < c1; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\n--- Resultant Matrix (A * B) (%d x %d) ---\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%7d", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}