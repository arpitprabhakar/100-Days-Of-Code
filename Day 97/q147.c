#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee { char name[100]; int id; int marks; };

int main() {
    struct Employee e;
    if (scanf("%99s %d %d", e.name, &e.id, &e.marks) != 3) return 0;
    FILE *f = fopen("employees.bin", "wb");
    if (!f) return 0;
    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
    // read back
    f = fopen("employees.bin", "rb");
    if (!f) return 0;
    struct Employee r;
    fread(&r, sizeof(r), 1, f);
    fclose(f);
    printf("Name: %s | ID: %d | Marks: %d", r.name, r.id, r.marks);
    return 0;
}

