//Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    int a[100][100];
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);
    int r2, c2;
    if (scanf("%d %d", &r2, &c2) != 2) return 0;
    int b[100][100];
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);
    // Assume dimensions match
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            if (j) printf(" ");
            printf("%d", a[i][j] + b[i][j]);
        }
        if (i < r1-1) printf("\n");
    }
    return 0;
}
