//Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // It's an alphabetic character
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}