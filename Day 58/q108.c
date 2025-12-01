#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int *a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int *res = malloc(sizeof(int) * n);
	// prefix products
	long long prod = 1;
	for (int i = 0; i < n; ++i) { res[i] = (int)prod; prod *= a[i]; }
	// suffix multiply
	prod = 1;
	for (int i = n - 1; i >= 0; --i) { res[i] = (int)(res[i] * prod); prod *= a[i]; }
	// print in bracketed comma-separated format as sample
	printf("[");
	for (int i = 0; i < n; ++i) {
		if (i) printf(",");
		printf("%d", res[i]);
	}
	printf("]");
	free(a); free(res);
	return 0;
}


