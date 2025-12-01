/*
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled. 
*/

#include<stdio.h>
 int main(){
    int days,fine;
    printf("No. of Days late:");
    scanf("%d",&days);

    if(days <= 5){
       fine=days*2;
       printf("Fine:Rs %d",fine);
    }
    else if(days > 5 && days <= 10){
       fine=10+((days-5)*4);
       printf("Fine:Rs %d",fine);
    }
    else if(days > 10 && days <= 30){
       fine=30+((days-10)*6);
       printf("Fine:Rs %d",fine);
    }
    else {
        printf("MEMBERSHIP CANCELLED");
    }

    return 0;
 }