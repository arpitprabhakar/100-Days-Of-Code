#include <stdio.h>
#include <string.h>

int main() {
    char filename[256];
    // read filename on first line
    if (!fgets(filename, sizeof(filename), stdin)) return 0;
    // strip newline
    size_t ln = strlen(filename);
    if (ln && filename[ln-1] == '\n') filename[ln-1] = '\0';
    // read the line to append
    char line[1024];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    // strip newline
    ln = strlen(line);
    if (ln && line[ln-1] == '\n') line[ln-1] = '\0';
    FILE *f = fopen(filename, "a");
    if (!f) { printf("Error opening file\n"); return 0; }
    fprintf(f, "\n%s", line);
    fclose(f);
    printf("File updated successfully with appended text.");
    return 0;
}

