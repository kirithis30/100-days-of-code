// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main() {
    FILE *fp;
    int c;
    long total_chars = 0;
    long total_words = 0;
    long total_lines = 0;
    int word_state = OUT;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        total_chars++;

        if (c == '\n') {
            total_lines++;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            word_state = OUT;
        } else if (word_state == OUT) {
            word_state = IN;
            total_words++;
        }
    }

    if (total_chars > 0 && c == EOF) {
        if (total_lines == 0) {
            total_lines = 1;
        }
    }

    fclose(fp);

    printf("File processed: input.txt\n");
    printf("Total Characters: %ld\n", total_chars);
    printf("Total Words: %ld\n", total_words);
    printf("Total Lines: %ld\n", total_lines);

    return 0;
}