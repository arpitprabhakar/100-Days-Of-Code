#include <stdio.h>
#include <string.h>

int main() {
    char op[16];
    int x, y;
    if (scanf("%15s %d %d", op, &x, &y) != 3) return 0;
    enum Choice { ADD, SUBTRACT, MULTIPLY };
    if (strcmp(op, "ADD") == 0) printf("%d", x + y);
    else if (strcmp(op, "SUBTRACT") == 0) printf("%d", x - y);
    else if (strcmp(op, "MULTIPLY") == 0) printf("%d", x * y);
    return 0;
}

