// Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    int i, j;

    printf("--- Pattern Printer ---\n");
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}