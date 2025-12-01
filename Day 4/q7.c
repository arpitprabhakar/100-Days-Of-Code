//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
        
    c = a + b; 
    b = c - b; 
    a = c - a; 
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}