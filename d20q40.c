// Write a program to find the 1’s complement of a binary number and print it

#include <stdio.h>
#include <string.h>

int main() {
    char binaryNum[100];
    int len, i;
    
    printf("--- 1's Complement Calculator ---\n");
    printf("Enter a binary number (e.g., 10110): ");
    
    if (scanf("%s", binaryNum) != 1) {
        printf("Invalid input. Could not read binary number.\n");
        return 1;
    }

    len = strlen(binaryNum);
    
    for (i = 0; i < len; i++) {
        if (binaryNum[i] != '0' && binaryNum[i] != '1') {
            printf("Error: Input contains non-binary characters.\n");
            return 1;
        }
    }

    printf("\nOriginal Binary: %s\n", binaryNum);
    printf("1's Complement:  ");

    for (i = 0; i < len; i++) {
        if (binaryNum[i] == '0') {
            binaryNum[i] = '1';
        } else {
            binaryNum[i] = '0';
        }
    }

    printf("%s\n", binaryNum);

    return 0;
}