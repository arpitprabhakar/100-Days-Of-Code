#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int target;
    if (scanf("%d", &target) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] + a[j] == target) { printf("%d %d", i, j); return 0; }
        }
    }
    printf("-1 -1");
    return 0;
}

