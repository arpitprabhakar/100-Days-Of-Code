#include <stdio.h>
#include <string.h>

int main() {
    char s[32];
    if (scanf("%31s", s) != 1) return 0;
    if (strcmp(s, "SUCCESS") == 0) printf("Operation succeeded");
    else if (strcmp(s, "FAILURE") == 0) printf("Operation failed");
    else if (strcmp(s, "TIMEOUT") == 0) printf("Operation timed out");
    return 0;
}

