#include <stdio.h>

struct Student { char name[100]; int roll; int marks; };

int main() {
    struct Student arr[5];
    for (int i = 0; i < 5; ++i) {
        if (scanf("%99s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks) != 3) return 0;
    }
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; ++i) printf("%s\t%d\t%d\n", arr[i].name, arr[i].roll, arr[i].marks);
    return 0;
}

