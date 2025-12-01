//Check if the elements on the diagonal of a matrix are distinct

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
    bool seen[100000] = {0};
    for (int i = 0; i < n; ++i) {
        int val = a[i][i];
        if (val >= 0 && val < 100000) {
            if (seen[val]) { printf("False"); return 0; }
            seen[val] = true;
        } else {
            // fallback for values outside range: check pairwise
            for (int j = 0; j < i; ++j)
                if (a[j][j] == val) { printf("False"); return 0; }
        }
    }
    printf("True");
    return 0;
}
