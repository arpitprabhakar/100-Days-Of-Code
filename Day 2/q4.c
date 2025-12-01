//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
        int main() {
            float r,area,circumference;

            scanf("%f",&r);

            area = 3.14 * r * r;
            circumference = 2 * 3.14 * r;

            printf("Area: %.2f\nCircumference: %.2f",area,circumference);
            return 0;

        }