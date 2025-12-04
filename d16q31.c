// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <math.h>

int main() {
    int n, binary = 0, remainder, base = 1;
    
    printf("--- Decimal to Binary Converter ---\n");
    printf("Enter a non-negative integer: ");

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    int originalN = n;

    if (originalN == 0) {
        printf("\nBinary Equivalent of %d is: 0\n", originalN);
        return 0;
    }

    // Convert decimal to binary
    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * base;
        n /= 2;
        base *= 10;
    }

    printf("\nOriginal Decimal: %d\n", originalN);
    printf("Binary Equivalent: %d\n", binary);

    return 0;
}