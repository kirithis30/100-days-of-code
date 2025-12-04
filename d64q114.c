//  Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

#define CHAR_SET_SIZE 256

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s[] = "pwwkew";
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }

    int last_occurrence[CHAR_SET_SIZE];
    int start = 0;
    int max_len = 0;
    int i;

    for (i = 0; i < CHAR_SET_SIZE; i++) {
        last_occurrence[i] = -1;
    }

    for (i = 0; i < n; i++) {
        int current_char_index = (int)s[i];

        if (last_occurrence[current_char_index] >= start) {
            start = last_occurrence[current_char_index] + 1;
        }

        max_len = max(max_len, i - start + 1);
        
        last_occurrence[current_char_index] = i;
    }

    printf("String: %s\n", s);
    printf("Length of the longest substring without repeating characters: %d\n", max_len);

    return 0;
}