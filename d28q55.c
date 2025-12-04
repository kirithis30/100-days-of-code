// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    int i;
    if (num <= 1) return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}