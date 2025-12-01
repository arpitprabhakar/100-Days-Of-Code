#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    return (ia > ib) - (ia < ib);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    for (int i = 1; i < n; ++i) if (a[i] == a[i-1]) { printf("%d", a[i]); free(a); return 0; }
    free(a);
    return 0;
}

