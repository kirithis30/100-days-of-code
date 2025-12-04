// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    double a, b, c;

    printf("--- Triangle Classifier ---\n");
    printf("Enter the length of side A: ");
    if (scanf("%lf", &a) != 1 || a <= 0) {
        printf("Invalid input. Lengths must be positive numbers.\n");
        return 1;
    }
    printf("Enter the length of side B: ");
    if (scanf("%lf", &b) != 1 || b <= 0) {
        printf("Invalid input. Lengths must be positive numbers.\n");
        return 1;
    }
    printf("Enter the length of side C: ");
    if (scanf("%lf", &c) != 1 || c <= 0) {
        printf("Invalid input. Lengths must be positive numbers.\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("\nClassification: Invalid Triangle\n");
        printf("The lengths (%.2lf, %.2lf, %.2lf) cannot form a valid triangle.\n", a, b, c);
        return 0;
    }

    printf("\nLengths: A=%.2lf, B=%.2lf, C=%.2lf\n", a, b, c);

    if (a == b && b == c) {
        printf("Classification: Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Classification: Isosceles Triangle\n");
    } else {
        printf("Classification: Scalene Triangle\n");
    }

    return 0;
}