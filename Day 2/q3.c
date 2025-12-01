//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
    int main() {
        int l,b,area,perimeter;

        scanf("%d %d",&l,&b);
        area = l * b;
        perimeter = 2 * (l+b);
        printf("Area: %d\nPerimeter: %d",area,perimeter);
        return 0;

    }
