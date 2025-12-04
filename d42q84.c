// Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[] = "example string for conversion";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}