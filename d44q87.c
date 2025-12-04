// Count spaces, digits, and special characters in a string.


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World! 123 @ Coder";
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];

        if (isspace(ch)) {
            spaces++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isalpha(ch)) {
            
        } else {
            special_chars++;
        }
        i++;
    }

    printf("String: %s\n", str);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special_chars);

    return 0;
}