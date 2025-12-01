//Read and print a matrix.

#include <stdio.h>
int main() {
	int r, c;
	if (scanf("%d %d", &r, &c) != 2) return 0;
	int a[100][100];
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (j) printf(" ");
			printf("%d", a[i][j]);
		}
		if (i < r-1) printf("\n");
	}
	return 0;
}
