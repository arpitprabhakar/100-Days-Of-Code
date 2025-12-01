//Count spaces, digits, and special characters in a string.

#include <stdio.h>  
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}