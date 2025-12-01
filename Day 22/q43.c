//Write a program to check if a number is a strong number.

#include<stdio.h>
   int main(){
    int n;
    printf("Enter Your num: ");
    scanf("%d",&n);
    int sum=0,temp=n;
    while(n!=0){
        int fact=1;
        int rem=n%10;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==temp){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    return 0;
   }