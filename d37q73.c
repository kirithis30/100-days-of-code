// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    
    printf("--- Matrix Row Sum Calculator ---\n");

    printf("Enter the number of rows for the matrix: ");
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > 10) {
        printf("Invalid input. Please enter a positive integer for rows (max 10).\n");
        return 1;
    }

    printf("Enter the number of columns for the matrix: ");
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > 10) {
        printf("Invalid input. Please enter a positive integer for columns (max 10).\n");
        return 1;
    }

    int matrix[rows][cols];
    long long rowSums[rows];

    printf("\nEnter the elements of the %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    printf("\n--- Entered Matrix ---\n");
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
        printf("\n");
    }

    printf("\n--- Row Sums ---\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of Row %d: %lld\n", i + 1, rowSums[i]);
    }

    return 0;
}