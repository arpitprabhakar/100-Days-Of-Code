#include <stdio.h>
#include <string.h>

struct Student { char name[100]; int roll; int marks; };

struct Student top_student(struct Student arr[], int n) {
    struct Student best = arr[0];
    for (int i = 1; i < n; ++i) if (arr[i].marks > best.marks) best = arr[i];
    return best;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    struct Student *arr = malloc(sizeof(struct Student) * n);
    for (int i = 0; i < n; ++i) scanf("%99s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
    struct Student best = top_student(arr, n);
    printf("Top Student: %s | Roll: %d | Marks: %d", best.name, best.roll, best.marks);
    free(arr);
    return 0;
}

