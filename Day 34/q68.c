//Delete an element from an array.

#include <stdio.h>
int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int a[1000];
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int pos;
	if (scanf("%d", &pos) != 1) return 0;
	// Treat pos as 0-based index of element to delete
	if (pos < 0) pos = 0;
	if (pos >= n) pos = n-1;
	for (int i = pos; i < n-1; ++i) a[i] = a[i+1];
	n--;
	for (int i = 0; i < n; ++i) {
		if (i) printf(" ");
		printf("%d", a[i]);
	}
	return 0;
}
