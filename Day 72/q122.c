#include <stdio.h>

int main() {
    FILE *f = fopen("info.txt", "r");
    if (!f) return 0;
    char buf[512];
    while (fgets(buf, sizeof(buf), f)) {
        fputs(buf, stdout);
    }
    fclose(f);
    return 0;
}

