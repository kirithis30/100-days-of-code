// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[] = "programming";
    int hash[26] = {0};
    int i = 0;
    char first_repeat = '\0';

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            hash[index]++;

            if (hash[index] == 2) {
                first_repeat = str[i];
                break;
            }
        }
        i++;
    }

    if (first_repeat != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", first_repeat);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}