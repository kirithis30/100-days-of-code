// Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Programming is fun";
    char result[50];
    int i = 0;
    int j = 0;
    char ch;

    while (str[i] != '\0') {
        ch = tolower(str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}