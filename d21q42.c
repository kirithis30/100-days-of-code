// Write a program to check if a number is a perfect number.#include <stdio.h>

#include <stdio.h>

int main() {
    int number;
    int i;
    int sum = 0;
    
    printf("--- Perfect Number Checker ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (number == 1) {
        printf("\nResult: %d is not a perfect number.\n", number);
        return 0;
    }

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    printf("\nOriginal Number: %d\n", number);

    if (sum == number) {
        printf("Result: %d is a PERFECT number.\n", number);
    } else {
        printf("Result: %d is NOT a perfect number (Sum of proper divisors is %d).\n", number, sum);
    }

    return 0;
}