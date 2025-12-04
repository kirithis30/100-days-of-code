// Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[] = "This is a test string";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}