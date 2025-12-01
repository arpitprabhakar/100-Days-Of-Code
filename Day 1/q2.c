//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    float a, b;
    float sum, difference, product, quotient;

    scanf("%f %f", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    
        if (b != 0) {
            quotient = a / b;
            printf("Quotient: %.2f\n", quotient);
        } else {
            printf("Quotient: Undefined (division by zero)\n");
        }

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}