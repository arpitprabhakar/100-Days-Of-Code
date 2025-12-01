//Rotate an array to the right by k positions.

#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int *a = malloc(sizeof(int) * (n>0?n:1));
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int k;
	if (scanf("%d", &k) != 1) { free(a); return 0; }
	if (n > 0) {
		k = k % n;
		if (k < 0) k += n;
		// rotate right by k
		int *b = malloc(sizeof(int) * n);
		for (int i = 0; i < n; ++i) b[(i + k) % n] = a[i];
		for (int i = 0; i < n; ++i) {
			if (i) printf(" ");
			printf("%d", b[i]);
		}
		free(b);
	}
	free(a);
	return 0;
}
