//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
 int main(){
    int a , b ,c;
    
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c) {
        printf("A is the greatest");
    }
    else if (b>a && b>c) {
        printf("B is the greatest");
    }
    else if(c>b && c>a) {
        printf("C is greatest");
    }
    return 0;
 }