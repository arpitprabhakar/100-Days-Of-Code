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
    int k;
    if (scanf("%d", &k) != 1) { free(a); return 0; }
    qsort(a, n, sizeof(int), cmp);
    if (k >= 1 && k <= n) printf("%d", a[k-1]);
    else printf("-1");
    free(a);
    return 0;
}

