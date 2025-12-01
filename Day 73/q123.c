#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[256];
    if (scanf("%255s", filename) != 1) return 0;
    FILE *f = fopen(filename, "r");
    if (!f) return 0;
    int ch;
    long chars = 0, words = 0, lines = 0;
    int in_word = 0;
    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) { if (in_word) { words++; in_word = 0; } }
        else in_word = 1;
    }
    if (in_word) words++;
    // If file not empty and last line doesn't end with newline, count it as a line
    if (chars > 0) {
        // reposition to check last char
        fseek(f, -1, SEEK_END);
        int last = fgetc(f);
        if (last != '\n') lines++;
    }
    fclose(f);
    printf("Characters: %ld\nWords: %ld\nLines: %ld", chars, words, lines);
    return 0;
}

