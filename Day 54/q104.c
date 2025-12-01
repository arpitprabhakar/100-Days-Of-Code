#include <stdio.h>

int main() {
	long long n;
	if (scanf("%lld", &n) != 1) return 0;
	long long total = n * (n + 1) / 2;
	for (long long x = 1; x <= n; ++x) {
		long long sum1 = x * (x + 1) / 2; // 1..x
		long long sumx_n = total - (x - 1) * x / 2; // x..n
		if (sum1 == sumx_n) { printf("%lld", x); return 0; }
	}
	printf("-1");
	return 0;
}

