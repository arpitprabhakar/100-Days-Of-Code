//Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>
int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	int x;
	int max1 = INT_MIN, max2 = INT_MIN;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (x > max1) { max2 = max1; max1 = x; }
		else if (x > max2 && x < max1) { max2 = x; }
	}
	if (max2 == INT_MIN) max2 = max1; // if all equal or only one element
	printf("%d", max2);
	return 0;
}
