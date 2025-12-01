//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999[^\n]", str) != 1) return 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("%s", str);
    return 0;
}