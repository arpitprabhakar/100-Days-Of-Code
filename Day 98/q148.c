#include <stdio.h>
#include <string.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    struct Student a, b;
    if (scanf("%99s %d %d", a.name, &a.roll, &a.marks) != 3) return 0;
    if (scanf("%99s %d %d", b.name, &b.roll, &b.marks) != 3) return 0;
    if (strcmp(a.name, b.name) == 0 && a.roll == b.roll && a.marks == b.marks) printf("Same");
    else printf("Different");
    return 0;
}

