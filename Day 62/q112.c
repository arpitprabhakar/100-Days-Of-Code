#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long best = -9223372036854775807LL;
    long long cur = 0;
    int x;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (i == 0) { cur = x; best = x; }
        else {
            if (cur + x > x) cur = cur + x; else cur = x;
            if (cur > best) best = cur;
        }
    }
    printf("%lld", best);
    return 0;
}

