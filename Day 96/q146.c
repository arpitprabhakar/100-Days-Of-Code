#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[100]; int id; struct Date joining; };

int main() {
    struct Employee e;
    if (scanf("%99s %d %d %d %d", e.name, &e.id, &e.joining.day, &e.joining.month, &e.joining.year) != 5) return 0;
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d", e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
    return 0;
}

