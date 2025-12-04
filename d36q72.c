// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    long long sum = 0;
    
    printf("--- Matrix Sum Calculator ---\n");

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
            sum += matrix[i][j];
        }
        printf("\n");
    }

    printf("\n--- Calculation Result ---\n");
    printf("The sum of all elements in the matrix is: %lld\n", sum);

    return 0;
}