// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *source_fp, *dest_fp;
    char source_filename[100];
    char dest_filename[100];
    int character;

    printf("Enter source filename: ");
    scanf("%99s", source_filename);

    printf("Enter destination filename: ");
    scanf("%99s", dest_filename);

    source_fp = fopen(source_filename, "r");

    if (source_fp == NULL) {
        printf("Error: Could not open source file %s\n", source_filename);
        return 1;
    }

    dest_fp = fopen(dest_filename, "w");

    if (dest_fp == NULL) {
        printf("Error: Could not open destination file %s\n", dest_filename);
        fclose(source_fp);
        return 1;
    }

    while ((character = fgetc(source_fp)) != EOF) {
        fputc(character, dest_fp);
    }

    printf("Successfully copied content from %s to %s\n", source_filename, dest_filename);

    fclose(source_fp);
    fclose(dest_fp);

    return 0;
}