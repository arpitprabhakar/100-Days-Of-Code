//Multiply two matrices.

#include <stdio.h>
#include <stdlib.h>

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
    // Multiply if c1 == r2
    int res[100][100];
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            long long sum = 0;
            for (int k = 0; k < c1; ++k) sum += (long long)a[i][k] * b[k][j];
            res[i][j] = (int)sum;
        }
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            if (j) printf(" ");
            printf("%d", res[i][j]);
        }
        if (i < r1-1) printf("\n");
    }
    return 0;
}
