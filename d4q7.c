 // write a program to swap two numbers without using a third variable

 #include <stdio.h>

int main() {

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    
    printf("\nBefore swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    
    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("\nAfter swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    return 0;
}
