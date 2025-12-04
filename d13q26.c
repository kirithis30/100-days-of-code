// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    printf("--- Number Printer (1 to N) ---\n");
    printf("Enter the positive integer limit (N): ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nNumbers from 1 to %d:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}