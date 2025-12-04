// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, reversedN = 0, remainder;
    
    printf("--- Palindrome Checker ---\n");
    printf("Enter an integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int originalN = n;

    // Logic to reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    printf("\nOriginal Number: %d\n", originalN);
    printf("Reversed Number: %d\n", reversedN);

    // Palindrome check
    if (originalN == reversedN) {
        printf("Result: %d IS a palindrome number.\n", originalN);
    } else {
        printf("Result: %d IS NOT a palindrome number.\n", originalN);
    }

    return 0;
}