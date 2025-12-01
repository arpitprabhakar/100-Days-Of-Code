/*
Write a program to calculate library fine based on late days as follows: using swicth case
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

    switch(days <= 30) {
        case 1:
            switch(days <= 10) {
                case 1:
                    switch(days <= 5) {
                        case 1:
                            fine = days * 2;
                            printf("Fine:Rs %d", fine);
                            break;
                        case 0:
                            fine = 10 + ((days - 5) * 4);
                            printf("Fine:Rs %d", fine);
                            break;
                    }
                    break;
                case 0:
                    fine = 30 + ((days - 10) * 6);
                    printf("Fine:Rs %d", fine);
                    break;
            }
            break;
        case 0:
            printf("MEMBERSHIP CANCELLED");
            break;
    }

    return 0;
 }