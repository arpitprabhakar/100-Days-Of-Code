#include <stdio.h>
#include <string.h>

int main() {
    char role[32];
    if (scanf("%31s", role) != 1) return 0;
    if (strcmp(role, "ADMIN") == 0) printf("Welcome Admin!");
    else if (strcmp(role, "USER") == 0) printf("Welcome User!");
    else if (strcmp(role, "GUEST") == 0) printf("Welcome Guest!");
    return 0;
}

