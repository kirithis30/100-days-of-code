// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Robert Downey Jr";
    int i = 0;
    int last_space = -1;
    int len = 0;

    while (name[len] != '\0') {
        if (name[len] == ' ') {
            last_space = len;
        }
        len++;
    }

    if (name[0] != '\0') {
        printf("%c. ", name[0]);
    }

    i = 1;
    while (i < last_space) {
        if (name[i] == ' ') {
            printf("%c. ", name[i + 1]);
        }
        i++;
    }

    if (last_space != -1) {
        printf("%s\n", &name[last_space + 1]);
    } else {
        printf("\n");
    }

    return 0;
}