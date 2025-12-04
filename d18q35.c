// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int n, i;
    int factorFound = 0;
    
    printf("--- Factor Finder ---\n");
    printf("Enter a positive integer: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nFactors of %d are: \n", n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            factorFound = 1;
        }
    }

    if (!factorFound) {
        // This case should theoretically not be reached for n >= 1
        printf("None (Error in logic or input)");
    }
    
    printf("\n");

    return 0;
}