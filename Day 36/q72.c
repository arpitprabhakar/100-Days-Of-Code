//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
	int r, c;
	if (scanf("%d %d", &r, &c) != 2) return 0;
	int sum = 0, x;
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j) {
			scanf("%d", &x);
			sum += x;
		}
	printf("%d", sum);
	return 0;
}
