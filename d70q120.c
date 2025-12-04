// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "this is a test sentence.";
    int i = 0;
    
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    for (i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Original String: \"this is a test sentence.\"\n");
    printf("Sentence Case: \"%s\"\n", str);

    return 0;
}