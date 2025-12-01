#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k;
    if (scanf("%d", &k) != 1) { free(a); return 0; }
    if (k <= 0 || k > n) { free(a); return 0; }
    int *dq = malloc(sizeof(int) * n);
    int head = 0, tail = 0; // dq stores indices, [head, tail)
    int printed = 0;
    for (int i = 0; i < n; ++i) {
        // remove indices out of window
        if (head < tail && dq[head] <= i - k) head++;
        // remove smaller elements
        while (head < tail && a[dq[tail-1]] <= a[i]) tail--;
        dq[tail++] = i;
        if (i >= k - 1) {
            if (printed) printf(" ");
            printf("%d", a[dq[head]]);
            printed = 1;
        }
    }
    free(a); free(dq);
    return 0;
}

