// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    
    printf("--- Sum of First N Odd Numbers ---\n");
    printf("Enter the positive integer limit (N): ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nThe first %d odd numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        printf("%d", oddNumber);
        
        if (i < n) {
            printf(" + ");
        }
        
        sum += oddNumber;
    }

    printf("\n\nSum of the first %d odd numbers (Sum = N^2):\n", n);
    printf("Total Sum: %d\n", sum);

    return 0;
}