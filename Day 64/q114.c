#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%100004s", s) != 1) return 0;
    int last[256];
    for (int i = 0; i < 256; ++i) last[i] = -1;
    int left = 0, best = 0;
    for (int i = 0; s[i]; ++i) {
        unsigned char c = s[i];
        if (last[c] >= left) left = last[c] + 1;
        last[c] = i;
        int len = i - left + 1;
        if (len > best) best = len;
    }
    printf("%d", best);
    return 0;
}

