//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int a[100][100];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    int sum = 0;
    if (n == m) {
        for (int i = 0; i < n; ++i) sum += a[i][i];
    }
    printf("%d", sum);
    return 0;
}
