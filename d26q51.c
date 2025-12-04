// Write a program to print the following pattern:
    

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    printf("--- Right-Aligned Number Triangle Pattern Printer ---\n");

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        // Spaces decrease as row number increases
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print numbers starting from (rows - i + 1) up to rows (5)
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;
}