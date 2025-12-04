// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder;
    int count = 0;
    double sum = 0.0;
    
    printf("--- Armstrong Number Checker ---\n");
    printf("Enter an integer: ");

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    originalN = n;

    int tempN = originalN;
    while (tempN != 0) {
        tempN /= 10;
        count++;
    }
    
    tempN = originalN;
    while (tempN != 0) {
        remainder = tempN % 10;
        sum += pow(remainder, count);
        tempN /= 10;
    }

    printf("\nOriginal Number: %d\n", originalN);
    
    if (originalN == (int)sum) {
        printf("Result: %d IS an Armstrong number.\n", originalN);
    } else {
        printf("Result: %d IS NOT an Armstrong number.\n", originalN);
    }

    return 0;
}