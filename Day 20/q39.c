//Write a program to find the product of odd digits of a number.

 #include<stdio.h>
  int main(){
    int n,prod=1,rem;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n != 0){
        rem = n % 10;
        if(rem%2!=0){
            prod = prod * rem;
        }
        n = n / 10;
    }
    printf("Product of odd digits is %d",prod);
  return 0;
 }