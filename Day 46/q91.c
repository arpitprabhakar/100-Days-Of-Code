//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            printf("%c", ch);
        }
    }
    return 0;
}