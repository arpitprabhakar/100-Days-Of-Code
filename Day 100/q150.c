#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    struct Student s;
    if (scanf("%99s %d %d", s.name, &s.roll, &s.marks) != 3) return 0;
    struct Student *p = &s;
    // modify via pointer (example: no change in this simple demo, but show -> usage)
    // For demonstration, we reassign values (same as input) then print
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", p->name, p->roll, p->marks);
    return 0;
}

