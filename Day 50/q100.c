//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    if (scanf("%99s", str) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int len = strlen(str);
    printf("The substrings of the string are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}