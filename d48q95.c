// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";
    int len1 = 0;
    int len2 = 0;
    int is_rotation = 0;
    char *temp;
    
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2 || len1 == 0) {
        is_rotation = 0;
    } else {
        temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
        
        strcpy(temp, str1);
        strcat(temp, str1);
        
        if (strstr(temp, str2) != NULL) {
            is_rotation = 1;
        }
        
        free(temp);
    }

    if (is_rotation) {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\".\n", str2, str1);
    }

    return 0;
}