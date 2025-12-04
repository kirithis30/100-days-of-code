// Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello Programmer";
    int vowels = 0;
    int consonants = 0;
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("The string is: %s\n", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}