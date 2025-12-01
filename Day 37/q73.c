//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
	int r, c;
	if (scanf("%d %d", &r, &c) != 2) return 0;
	int a[100][100];
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < r; ++i) {
		int s = 0;
		for (int j = 0; j < c; ++j) s += a[i][j];
		if (i) printf(" ");
		printf("%d", s);
	}
	return 0;
}
