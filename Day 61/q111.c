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
    int *q = malloc(sizeof(int) * n);
    int head = 0, tail = 0; // store indices of negative numbers
    int printed = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) q[tail++] = i;
        if (i >= k - 1) {
            // remove out-of-window indices
            while (head < tail && q[head] < i - k + 1) head++;
            if (printed) printf(" ");
            if (head == tail) printf("0");
            else printf("%d", a[q[head]]);
            printed = 1;
        }
    }
    free(a); free(q);
    return 0;
}

