// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

#include <stdio.h>

int main() {
    double percentage;

    printf("--- Student Grade Calculator ---\n");
    printf("Enter the percentage score (0.0 to 100.0): ");

    while (scanf("%lf", &percentage) != 1 || percentage < 0 || percentage > 100) {
        while (getchar() != '\n');
        printf("Invalid input. Please enter a percentage between 0.0 and 100.0: ");
    }

    printf("\nScore Entered: %.1lf%%\n", percentage);

    if (percentage >= 90.0) {
        printf("Assigned Grade: A\n");
    } else if (percentage >= 80.0) {
        printf("Assigned Grade: B\n");
    } else if (percentage >= 70.0) {
        printf("Assigned Grade: C\n");
    } else if (percentage >= 60.0) {
        printf("Assigned Grade: D\n");
    } else {
        printf("Assigned Grade: F\n");
    }

    return 0;
}