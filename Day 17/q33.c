//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {    
    int n, original, remainder;
    double result = 0;  
    int digits = 0;
    printf("Enter an integer: ");  
    scanf("%d", &n);
    original = n; 

    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n; 

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }               

    if (result == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}