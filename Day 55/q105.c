#include <stdio.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int a[100000];
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	// Boyer-Moore majority vote
	int candidate = 0, count = 0;
	for (int i = 0; i < n; ++i) {
		if (count == 0) { candidate = a[i]; count = 1; }
		else if (a[i] == candidate) count++;
		else count--;
	}
	// verify
	int cnt = 0;
	for (int i = 0; i < n; ++i) if (a[i] == candidate) cnt++;
	if (cnt > n/2) printf("%d", candidate);
	else printf("-1");
	return 0;
}

