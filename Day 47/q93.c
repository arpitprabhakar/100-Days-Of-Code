//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    if (scanf("%999s %999s", str1, str2) != 2) return 0;
    int freq[256] = {0}; // Assuming ASCII characters
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("Not anagrams");
        return 0;
    }
    for (int i = 0; i < len1; ++i) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; ++i) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}