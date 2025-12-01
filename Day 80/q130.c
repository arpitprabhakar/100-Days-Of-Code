#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    FILE *f = fopen("students.txt", "w");
    if (!f) return 0;
    for (int i = 0; i < n; ++i) {
        char name[100];
        int roll, marks;
        scanf("%99s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
    fclose(f);
    // read back and display
    f = fopen("students.txt", "r");
    if (!f) return 0;
    char name[100];
    int roll, marks;
    while (fscanf(f, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(f);
    return 0;
}

