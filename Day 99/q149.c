#include <stdio.h>
#include <stdlib.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    struct Student *s = malloc(sizeof(struct Student));
    if (!s) return 0;
    if (scanf("%99s %d %d", s->name, &s->roll, &s->marks) != 3) { free(s); return 0; }
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);
    free(s);
    return 0;
}

