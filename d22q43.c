// Write a program to check if a number is a strong number.

#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, tempNumber;
    long long sumOfFactorials = 0;
    int digit;
    
    printf("--- Strong Number Checker ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    tempNumber = number;

    while (tempNumber > 0) {
        digit = tempNumber % 10;
        sumOfFactorials += factorial(digit);
        tempNumber /= 10;
    }
    
    printf("\nOriginal Number: %d\n", number);

    if (sumOfFactorials == number) {
        printf("Result: %d is a STRONG number.\n", number);
    } else {
        printf("Result: %d is NOT a strong number (Sum of factorials is %lld).\n", number, sumOfFactorials);
    }

    return 0;
}