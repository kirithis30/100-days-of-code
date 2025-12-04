// Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[] = "programming is fun";
    char target = 'g';
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string: %s\n", target, count, str);

    return 0;
}