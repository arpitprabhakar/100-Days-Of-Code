#include <stdio.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int a[100000];
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int k;
	if (scanf("%d", &k) != 1) return 0;
	if (k <= 0 || k > n) {
		printf("0");
		return 0;
	}
	long long sum = 0;
	for (int i = 0; i < k; ++i) sum += a[i];
	long long best = sum;
	for (int i = k; i < n; ++i) {
		sum += a[i]; sum -= a[i-k];
		if (sum > best) best = sum;
	}
	printf("%lld", best);
	return 0;
}


