// Toggle case of each character in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Toggle Case 123";
    int i = 0;

    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}