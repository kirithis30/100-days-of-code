// Write a program to print the following pattern:


#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    printf("--- Right Triangle Pattern Printer ---\n");
    
    // Outer loop controls the number of rows (i = 1 to 5)
    for (i = 1; i <= rows; i++) {
        // Inner loop controls the number of stars in the current row.
        // It runs from j = 1 up to i (current row number).
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}