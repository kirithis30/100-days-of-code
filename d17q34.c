// Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    
    printf("--- Prime Number Checker ---\n");
    printf("Enter a positive integer: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (n == 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= (int)sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("\nNumber Entered: %d\n", n);

    if (isPrime) {
        printf("Result: %d IS a prime number.\n", n);
    } else {
        printf("Result: %d IS NOT a prime number.\n", n);
    }

    return 0;
}