//Write a program to take a number as input and print its equivalent binary representation without using an array.

#include <stdio.h>
int main() {    
    int n, binary = 0, place = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }

    printf("The binary representation is: %d\n", binary);
    return 0;
}
 