//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int a[100][100];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    int total = n + m - 2;
    int first = 1;
    for (int s = 0; s <= total; ++s) {
        if (s % 2 == 0) {
            int i = (s < n) ? s : n-1;
            for (; i >= 0; --i) {
                int j = s - i;
                if (j < 0 || j >= m) continue;
                if (!first) printf(" "); printf("%d", a[i][j]); first = 0;
            }
        } else {
            int i = 0;
            for (; i < n; ++i) {
                int j = s - i;
                if (j < 0 || j >= m) continue;
                if (!first) printf(" "); printf("%d", a[i][j]); first = 0;
            }
        }
    }
    return 0;
}
