// Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "level";
    int length = 0;
    int i = 0;
    int j;
    int is_palindrome = 1;
    char temp_str[100];

    while (str[length] != '\0') {
        temp_str[length] = tolower(str[length]);
        length++;
    }
    temp_str[length] = '\0';

    j = length - 1;

    while (i < j) {
        if (temp_str[i] != temp_str[j]) {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}