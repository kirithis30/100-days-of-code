// write a program to find the roots of a quadratic equation and categorize them

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;
    double root1, root2;
    double realPart, imagPart;

    printf("--- Quadratic Equation Root Finder ---\n");
    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("\nCATEGORY: Infinite Solutions (0=0)\n");
                printf("The equation is trivial.\n");
            } else {
                printf("\nCATEGORY: No Solution\n");
                printf("The equation is inconsistent (e.g., 5=0).\n");
            }
        } else {
            printf("\nCATEGORY: Linear Equation (a=0)\n");
            root1 = -c / b;
            printf("The single real root is: %.4lf\n", root1);
        }
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        printf("\nCATEGORY: Two Distinct Real Roots\n");

        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);

        printf("Root 1 (x1): %.4lf\n", root1);
        printf("Root 2 (x2): %.4lf\n", root2);

    } else if (delta == 0) {
        printf("\nCATEGORY: One Real Root (Equal Roots)\n");

        root1 = -b / (2 * a);
        printf("Root 1 & 2 (x1 = x2): %.4lf\n", root1);

    } else {
        printf("\nCATEGORY: Two Complex Roots\n");

        realPart = -b / (2 * a);
        imagPart = sqrt(-delta) / (2 * a);

        printf("Root 1 (x1): %.4lf + %.4lfi\n", realPart, imagPart);
        printf("Root 2 (x2): %.4lf - %.4lfi\n", realPart, imagPart);
    }

    return 0;
}