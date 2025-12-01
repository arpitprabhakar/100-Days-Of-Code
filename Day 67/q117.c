#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    if (scanf("%d", &m) != 1) return 0;
    int *a = malloc(sizeof(int) * m);
    for (int i = 0; i < m; ++i) scanf("%d", &a[i]);
    int n;
    if (scanf("%d", &n) != 1) { free(a); return 0; }
    int *b = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
    int i = 0, j = 0;
    int first = 0;
    while (i < m && j < n) {
        if (first) printf(" ");
        if (a[i] <= b[j]) { printf("%d", a[i++]); }
        else { printf("%d", b[j++]); }
        first = 1;
    }
    while (i < m) { if (first) printf(" "); printf("%d", a[i++]); first = 1; }
    while (j < n) { if (first) printf(" "); printf("%d", b[j++]); first = 1; }
    free(a); free(b);
    return 0;
}

