//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int a, b, var;

    scanf("%d %d", &a, &b);

    var = a;
    a = b;
    b = var;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}