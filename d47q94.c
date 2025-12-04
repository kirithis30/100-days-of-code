// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    char longest_word[50] = "";
    char current_word[50] = "";
    int max_len = 0;
    int current_len = 0;
    int i = 0;
    
    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            current_word[current_len] = sentence[i];
            current_len++;
        } else {
            current_word[current_len] = '\0';
            if (current_len > max_len) {
                max_len = current_len;
                strcpy(longest_word, current_word);
            }
            current_len = 0;
            current_word[0] = '\0';
        }
        i++;
    }

    // Check the last word if the sentence doesn't end with a space/delimiter
    current_word[current_len] = '\0';
    if (current_len > max_len) {
        strcpy(longest_word, current_word);
    }

    printf("Sentence: %s\n", sentence);
    printf("Longest word: %s\n", longest_word);

    return 0;
}