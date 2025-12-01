#include <stdio.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    struct Student s;
    if (scanf("%99s %d %d", s.name, &s.roll, &s.marks) != 3) return 0;
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
    return 0;
}

