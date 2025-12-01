#include <stdio.h>
#include <ctype.h>

int main() {
    char infile[256], outfile[256];
    if (scanf("%255s %255s", infile, outfile) != 2) return 0;
    FILE *fi = fopen(infile, "r");
    if (!fi) return 0;
    FILE *fo = fopen(outfile, "w");
    if (!fo) { fclose(fi); return 0; }
    int c;
    while ((c = fgetc(fi)) != EOF) fputc(toupper(c), fo);
    fclose(fi); fclose(fo);
    return 0;
}

