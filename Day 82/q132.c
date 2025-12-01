#include <stdio.h>
#include <string.h>

int main() {
    char s[32];
    if (scanf("%31s", s) != 1) return 0;
    if (strcmp(s, "RED") == 0) printf("Stop");
    else if (strcmp(s, "YELLOW") == 0) printf("Wait");
    else if (strcmp(s, "GREEN") == 0) printf("Go");
    return 0;
}

