// write a program to swap two number using a third variable
#include <stdio.h>

int main() {
    
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

   
    temp = a;
    a = b;    
    b = temp;  

    printf("\nAfter swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    return 0;
}
