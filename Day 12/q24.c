/*
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include<stdio.h>
    int main(){
        int units;
        float bill;
        printf("Units Consumed:");
        scanf("%d",&units);
    
        if(units <= 100){
        bill=units*5;
        printf("Bill:Rs %.2f",bill);
        }
        else if(units > 100 && units <= 200){
        bill=500+((units-100)*7);
        printf("Bill:Rs %.2f",bill);
        }
        else if(units > 200 && units <= 300){
        bill=1200+((units-200)*10);
        printf("Bill:Rs %.2f",bill);
        }
        else {
            bill=2200+((units-300)*12);
            printf("Bill:Rs %.2f",bill);
        }
    
        return 0;
    }