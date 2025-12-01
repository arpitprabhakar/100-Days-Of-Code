//Write a program to find the LCM of two numbers.

#include<stdio.h>
 int main(){
    int n1,n2,lcm;
    printf("Enter your First num ");
    scanf("%d",&n1);
    printf("Enter your Second num ");
    scanf("%d",&n2);
    for(int i=1; i<=n1 && i<=n2; i++ ){
        if(n1%i==0 && n2%i==0){
            lcm = i;
        }      
    }
      lcm = (n1*n2)/lcm;
      printf("LCM of %d and %d is %d",n1,n2,lcm);
   return 0;
 }