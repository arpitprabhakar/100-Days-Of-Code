#include <stdio.h>
#include <string.h>

int main() {
    char m[8];
    if (scanf("%7s", m) != 1) return 0;
    if (strcmp(m, "FEB") == 0) printf("28 or 29 days");
    else if (strcmp(m, "APR") == 0 || strcmp(m, "JUN") == 0 || strcmp(m, "SEP") == 0 || strcmp(m, "NOV") == 0) printf("30 days");
    else printf("31 days");
    return 0;
}

