#include <stdio.h>
#include <string.h>

int main() {
    enum Gender { MALE, FEMALE, OTHER };
    char s[16];
    if (scanf("%15s", s) != 1) return 0;
    if (strcmp(s, "MALE") == 0) printf("Male");
    else if (strcmp(s, "FEMALE") == 0) printf("Female");
    else printf("Other");
    return 0;
}

