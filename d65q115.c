// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram"

#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 26

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int len_s = 0;
    int len_t = 0;
    int char_counts[CHAR_COUNT] = {0};
    int i;
    int is_anagram = 1;

    while (s[len_s] != '\0') {
        len_s++;
    }
    while (t[len_t] != '\0') {
        len_t++;
    }

    if (len_s != len_t) {
        is_anagram = 0;
    } else {
        for (i = 0; i < len_s; i++) {
            char_counts[s[i] - 'a']++;
            char_counts[t[i] - 'a']--;
        }

        for (i = 0; i < CHAR_COUNT; i++) {
            if (char_counts[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    printf("String s: %s\n", s);
    printf("String t: %s\n", t);
    
    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}