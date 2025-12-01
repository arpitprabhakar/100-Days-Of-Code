#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int x;
    int xor = 0;
    for (int i = 0; i < n; ++i) { scanf("%d", &x); xor ^= x; }
    for (int i = 0; i <= n; ++i) xor ^= i;
    printf("%d", xor);
    return 0;
}

