// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int size;
    int i, j;
    int isDistinct = 1;
    
    printf("--- Main Diagonal Distinct Element Checker ---\n");

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

    int diagonalElements[size];
    for (i = 0; i < size; i++) {
        diagonalElements[i] = matrix[i][i];
    }
    
    printf("Main Diagonal Elements: ");
    for (i = 0; i < size; i++) {
        printf("%d%s", diagonalElements[i], (i < size - 1) ? ", " : "");
    }
    printf("\n");

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (diagonalElements[i] == diagonalElements[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct == 0) {
            break;
        }
    }

    if (isDistinct) {
        printf("\nResult: All elements on the main diagonal are DISTINCT.\n");
    } else {
        printf("\nResult: The main diagonal contains DUPLICATE elements.\n");
    }

    return 0;
}