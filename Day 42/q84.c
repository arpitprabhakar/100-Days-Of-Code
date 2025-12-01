//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        str[i] = ch;
    }
    printf("%s", str);
    return 0;
}