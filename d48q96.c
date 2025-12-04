// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse_word(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "The quick brown fox";
    int i = 0;
    char *word_start = str;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverse_word(word_start, &str[i - 1]);
            word_start = &str[i + 1];
        }
        i++;
    }

    reverse_word(word_start, &str[i - 1]);

    printf("%s\n", str);

    return 0;
}