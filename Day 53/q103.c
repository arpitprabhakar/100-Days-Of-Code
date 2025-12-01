#include <stdio.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int a[100000];
	long long total = 0;
	for (int i = 0; i < n; ++i) { scanf("%d", &a[i]); total += a[i]; }
	long long left = 0;
	for (int i = 0; i < n; ++i) {
		if (left == total - left - a[i]) { printf("%d", i); return 0; }
		left += a[i];
	}
	printf("-1");
	return 0;
}


