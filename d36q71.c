// Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    
    printf("--- Matrix Reader and Printer ---\n");

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
        for (j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}