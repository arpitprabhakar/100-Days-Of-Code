#include <stdio.h>

int main() {
    char filename[256];
    if (scanf("%255s", filename) != 1) return 0;
    FILE *f = fopen(filename, "r");
    if (!f) { printf("Error: File does not exist!"); return 0; }
    printf("File opened successfully.\n");
    char buf[512];
    while (fgets(buf, sizeof(buf), f)) fputs(buf, stdout);
    fclose(f);
    return 0;
}

