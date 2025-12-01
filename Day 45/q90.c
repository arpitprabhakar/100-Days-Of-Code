//Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    printf("%s", str);
    return 0;
}