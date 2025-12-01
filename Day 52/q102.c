#include <stdio.h>
#include <stdlib.h>

int lower_bound(int a[], int n, int x) {
	int l = 0, r = n;
	while (l < r) {
		int m = l + (r - l) / 2;
		if (a[m] < x) l = m + 1;
		else r = m;
	}
	return l;
}

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int *a = malloc(sizeof(int) * (n>0?n:1));
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int x;
	if (scanf("%d", &x) != 1) { free(a); return 0; }
	int idx = lower_bound(a, n, x);
	if (idx == n) printf("-1");
	else printf("%d", idx);
	free(a);
	return 0;
}


