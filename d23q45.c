// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator, term;

    printf("--- Series Sum Calculator ---\n");
    printf("Series: 2/3 + 4/7 + 6/11 + 8/15 + ... (up to n terms)\n");
    printf("Enter the number of terms (n): ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        numerator = (double)(2 * i);
        denominator = (double)(4 * i - 1);
        term = numerator / denominator;
        
        sum += term;
    }

    printf("\nSum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}