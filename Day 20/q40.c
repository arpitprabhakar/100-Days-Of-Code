//Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
 int main(){
    int n,rem,rev=0;
    printf("enter the binary number: ");
    scanf("%d",&n);
    while(n != 0){
        rem = n % 10;
        if(rem==0){
            rem=1;
        }
        else{
            rem=0;
        }
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("1's complement is %d",rev);
  return 0;
 }