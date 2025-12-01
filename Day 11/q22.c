//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
 int main(){
   float cp,sp,l,p,profit_per,loss_per;
   
   printf("Cost price:");
   scanf("%f",&cp);

   printf("Selling price:");
   scanf("%f",&sp);

   if(cp>sp) {
      l=cp-sp;
      loss_per=(l/cp)*100;
      printf("Loss percentage:%.1f\n",loss_per);
   }
   else if(cp == sp) {
    printf("No loss No profit\n");
   }
   else if(cp < sp) {
    p=sp-cp;
    profit_per=(p/cp)*100;
    printf("Profit percentage:%.1f\n",profit_per);
   }

   return 0;
 }