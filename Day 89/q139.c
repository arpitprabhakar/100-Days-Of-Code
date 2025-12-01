#include <stdio.h>

int main() {
    enum Result { SUCCESS, FAILURE, TIMEOUT };
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}

