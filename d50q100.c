// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd";
    int n = 0;
    int i, j, k;

    while (str[n] != '\0') {
        n++;
    }

    printf("String: %s\n", str);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}