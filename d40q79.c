// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int N;
    int i, j, k;

    printf("--- Matrix Diagonal Traversal ---\n");

    printf("Enter the size of the square matrix (N x N, max 10): ");
    if (scanf("%d", &N) != 1 || N <= 0 || N > 10) {
        printf("Invalid input. Please enter a positive integer for size (max 10).\n");
        return 1;
    }

    int matrix[N][N];

    printf("\nEnter the elements of the %d x %d matrix:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    printf("\n--- Entered Matrix ---\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Diagonal Traversal (Anti-Diagonals: Top-Right to Bottom-Left) ---\n");

    for (k = 0; k <= 2 * (N - 1); k++) {
        printf("Diagonal %d (Sum of Indices = %d): ", k + 1, k);
        
        int start_i = (k < N) ? 0 : k - (N - 1);
        
        int end_i = (k < N) ? k : N - 1;

        for (i = start_i; i <= end_i; i++) {
            j = k - i;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}