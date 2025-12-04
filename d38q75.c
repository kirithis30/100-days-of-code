// Add two matrices.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    
    printf("--- Matrix Addition Calculator ---\n");

    printf("Enter the number of rows for the matrices (max 10): ");
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > 10) {
        printf("Invalid input. Please enter a positive integer for rows (max 10).\n");
        return 1;
    }

    printf("Enter the number of columns for the matrices (max 10): ");
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > 10) {
        printf("Invalid input. Please enter a positive integer for columns (max 10).\n");
        return 1;
    }

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int resultMatrix[rows][cols];

    printf("\n--- Enter elements for Matrix 1 (%d x %d) ---\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element 1 at position (%d, %d): ", i, j);
            if (scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    printf("\n--- Enter elements for Matrix 2 (%d x %d) ---\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element 2 at position (%d, %d): ", i, j);
            if (scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n--- Resultant Sum Matrix (%d x %d) ---\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}