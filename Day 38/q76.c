//Check if a matrix is symmetric.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int a[100][100];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    if (n != m) { printf("False"); return 0; }
    bool sym = true;
    for (int i = 0; i < n && sym; ++i)
        for (int j = i+1; j < n; ++j)
            if (a[i][j] != a[j][i]) { sym = false; break; }
    printf(sym ? "True" : "False");
    return 0;
}
