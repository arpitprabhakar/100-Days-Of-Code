#include <stdio.h>

int main() {
    char src[256], dst[256];
    if (scanf("%255s %255s", src, dst) != 2) return 0;
    FILE *fs = fopen(src, "r");
    if (!fs) { printf("Error opening source\n"); return 0; }
    FILE *fd = fopen(dst, "w");
    if (!fd) { fclose(fs); return 0; }
    int c;
    while ((c = fgetc(fs)) != EOF) fputc(c, fd);
    fclose(fs); fclose(fd);
    printf("File copied successfully to %s", dst);
    return 0;
}

