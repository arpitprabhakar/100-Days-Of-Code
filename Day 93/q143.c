#include <stdio.h>
#include <string.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    struct Student best = {"",0,-2147483648};
    for (int i = 0; i < n; ++i) {
        struct Student s;
        scanf("%99s %d %d", s.name, &s.roll, &s.marks);
        if (s.marks > best.marks) best = s;
    }
    printf("Topper: %s (Marks: %d)", best.name, best.marks);
    return 0;
}

