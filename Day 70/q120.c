#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    // remove trailing newline
    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[len-1] = '\0';
    int start = 1;
    for (int i = 0; s[i]; ++i) {
        if (isspace((unsigned char)s[i])) { start = 1; putchar(s[i]); }
        else {
            if (start) putchar(toupper((unsigned char)s[i]));
            else putchar(tolower((unsigned char)s[i]));
            start = 0;
        }
    }
    return 0;
}

