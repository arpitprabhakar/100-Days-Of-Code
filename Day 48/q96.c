//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Invalid input.\n");
        return 1;
    }

    // Remove trailing newline character if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    char result[200] = "";
    char *word = strtok(sentence, " ");

    while (word != NULL) {
        int word_len = strlen(word);
        char reversed_word[100];
        
        // Reverse the current word
        for (int i = 0; i < word_len; i++) {
            reversed_word[i] = word[word_len - i - 1];
        }
        reversed_word[word_len] = '\0';

        // Append the reversed word to the result
        strcat(result, reversed_word);
        strcat(result, " ");

        word = strtok(NULL, " ");
    }

    // Remove trailing space
    len = strlen(result);
    if (len > 0 && result[len - 1] == ' ') {
        result[len - 1] = '\0';
    }

    printf("The sentence with each word reversed is: %s\n", result);
    return 0;
}