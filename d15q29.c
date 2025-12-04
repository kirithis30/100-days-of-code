// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    
    printf("--- Factorial Calculator ---\n");
    printf("Enter a non-negative integer (N): ");

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("\nFactorial of 0 is: 1\n");
        return 0;
    }

    printf("\nCalculating %d! = ", n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
        printf("%d", i);
        if (i < n) {
            printf(" * ");
        }
    }

    printf("\n\nTotal Factorial: %lld\n", factorial);

    return 0;
}