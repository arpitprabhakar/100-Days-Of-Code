//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int freq[26] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                printf("%c", ch);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet");
    return 0;
}