#include <stdio.h>

int main() {
    char filename[256];
    if (scanf("%255s", filename) != 1) return 0;
    FILE *f = fopen(filename, "r");
    if (!f) return 0;
    long long sum = 0;
    int x, count = 0;
    while (fscanf(f, "%d", &x) == 1) { sum += x; count++; }
    fclose(f);
    double avg = count ? (double)sum / count : 0.0;
    printf("Sum = %lld\nAverage = %.2f", sum, avg);
    return 0;
}

