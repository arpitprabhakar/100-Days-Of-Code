//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    if (scanf("%999s", str) != 1) return 0;
    int len = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }
    return 0;
}