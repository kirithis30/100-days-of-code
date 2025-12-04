// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char text_to_append[100];

    printf("Enter the text to append: ");
    scanf("%99[^\n]%*c", text_to_append);

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "\n%s", text_to_append);

    fclose(fp);

    printf("Text successfully appended to info.txt.\n");

    return 0;
}