#include <stdio.h>
#include <stdlib.h>

int lower_bound(int a[], int n, int target) {
	int l = 0, r = n; // first index >= target
	while (l < r) {
		int m = l + (r - l) / 2;
		if (a[m] < target) l = m + 1;
		else r = m;
	}
	return l;
}

int upper_bound(int a[], int n, int target) {
	int l = 0, r = n; // first index > target
	while (l < r) {
		int m = l + (r - l) / 2;
		if (a[m] <= target) l = m + 1;
		else r = m;
	}
	return l;
}

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int *a = malloc(sizeof(int) * (n>0?n:1));
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int target;
	if (scanf("%d", &target) != 1) { free(a); return 0; }
	int lo = lower_bound(a, n, target);
	if (lo == n || a[lo] != target) {
		printf("-1,-1");
		free(a);
		return 0;
	}
	int up = upper_bound(a, n, target);
	printf("%d,%d", lo, up - 1);
	free(a);
	return 0;
}


