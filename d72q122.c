// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file or file not found.\n");
        return 1;
    }

    printf("--- Contents of info.txt ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    printf("----------------------------\n");

    fclose(fp);

    return 0;
}