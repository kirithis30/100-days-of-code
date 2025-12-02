// write a program input an intger and check whether it is positive, negative or zero using nested if-else

#include <stdio.h>

int main() {
    
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number >= 0) {
        
        if (number == 0) {
            printf("%d is zero.\n", number);
        } else {
            printf("%d is a positive number.\n", number);
        }
    } else {
        
        printf("%d is a negative number.\n", number);
    }

    return 0;
}