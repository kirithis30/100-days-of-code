// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversedN = 0, remainder;
    
    printf("--- Number Reverser ---\n");
    printf("Enter an integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    printf("\nOriginal Number: %d\n", originalN);
    printf("Reversed Number: %d\n", reversedN);

    return 0;
}