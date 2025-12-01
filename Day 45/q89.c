//Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char str[1000];
    char ch;
    if (scanf("%999s %c", str, &ch) != 2) return 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}