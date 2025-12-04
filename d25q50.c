// Write a program to print the following pattern:


#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    printf("--- Inverted Right-Aligned Star Pattern Printer ---\n");

    for (i = 1; i <= rows; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
