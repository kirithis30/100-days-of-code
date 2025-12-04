// Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Reversal";
    int length = 0;
    int i, j;
    char temp;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s\n", str);

    return 0;
}