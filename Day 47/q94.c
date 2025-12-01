//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int maxLen = 0;
    char longestWord[1000] = "";
    char *token = strtok(str, " \n");
    while (token != NULL) {
        int len = strlen(token);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }
    printf("%s", longestWord);
    return 0;
}