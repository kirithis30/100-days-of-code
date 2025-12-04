// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int number, originalNumber, sum = 0, remainder;
    
    printf("--- Sum of Digits Calculator ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }
    
    printf("\nOriginal Number: %d\n", originalNumber);
    printf("Sum of Digits: %d\n", sum);

    return 0;
}