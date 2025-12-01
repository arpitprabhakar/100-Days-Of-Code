//Reverse a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int len = strlen(str);
    for (int i = len - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
    return 0;
}