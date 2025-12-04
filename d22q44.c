// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator, term;

    printf("--- Series Sum Calculator ---\n");
    printf("Series: 1 + 3/4 + 5/6 + 7/8 + ... (up to n terms)\n");
    printf("Enter the number of terms (n): ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            term = 1.0;
        } else {
            numerator = (double)(2 * i - 1);
            denominator = (double)(2 * i);
            term = numerator / denominator;
        }
        sum += term;
    }

    printf("\nSum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}