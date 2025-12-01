#include <stdio.h>

int main() {
    enum Colors { RED, YELLOW, GREEN };
    for (int i = RED; i <= GREEN; ++i) {
        if (i == RED) printf("RED=%d\n", i);
        else if (i == YELLOW) printf("YELLOW=%d\n", i);
        else if (i == GREEN) printf("GREEN=%d\n", i);
    }
    return 0;
}

