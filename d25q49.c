// Write a program to print the following pattern:


#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    printf("--- Inverted Number Triangle Pattern Printer ---\n");
    
    for (i = 1; i <= rows; i++) {
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}