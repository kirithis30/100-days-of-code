// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    int c;

    printf("Enter the filename to read: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File \"%s\" does not exist or could not be opened.\n", filename);
        return 1;
    }

    printf("\n--- Contents of \"%s\" ---\n", filename);
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    printf("\n-------------------------------\n");

    fclose(fp);

    return 0;
}