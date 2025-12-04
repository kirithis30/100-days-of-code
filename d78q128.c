// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int c;
    long vowels = 0;
    long consonants = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        c = tolower(c);

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("File processed: input.txt\n");
    printf("Total Vowels: %ld\n", vowels);
    printf("Total Consonants: %ld\n", consonants);

    return 0;
}