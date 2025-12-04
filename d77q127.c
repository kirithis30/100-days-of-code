// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in_fp, *out_fp;
    int c;

    in_fp = fopen("input.txt", "r");
    if (in_fp == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    out_fp = fopen("output.txt", "w");
    if (out_fp == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(in_fp);
        return 1;
    }

    while ((c = fgetc(in_fp)) != EOF) {
        if (islower(c)) {
            c = toupper(c);
        }
        fputc(c, out_fp);
    }

    printf("Content successfully converted to uppercase and written to output.txt\n");

    fclose(in_fp);
    fclose(out_fp);

    return 0;
}