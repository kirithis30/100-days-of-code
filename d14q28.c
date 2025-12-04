// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int count = 0;
    
    printf("--- Product of Even Numbers (1 to N) ---\n");
    printf("Enter the positive integer limit (N): ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nEven numbers from 1 to %d:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (count > 0) {
                printf(" * ");
            }
            printf("%d", i);
            product *= i;
            count++;
        }
    }

    if (count == 0) {
        printf("No even numbers found in this range.\n");
    }

    printf("\n\nTotal Product: %lld\n", product);

    return 0;
}