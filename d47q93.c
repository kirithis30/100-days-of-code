// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char str1[MAX_SIZE] = "Listen";
    char str2[MAX_SIZE] = "Silent";
    int count1[26] = {0};
    int count2[26] = {0};
    int len1 = 0;
    int len2 = 0;
    int is_anagram = 1;
    int i;

    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        is_anagram = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (isalpha(str1[i])) {
                count1[tolower(str1[i]) - 'a']++;
            }
            if (isalpha(str2[i])) {
                count2[tolower(str2[i]) - 'a']++;
            }
        }

        for (i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}