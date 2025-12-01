/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include<stdio.h>
 int main(){
    char op;
    float num1,num2,result;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c",&op);
    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            } else {
                printf("Error! Division by zero.");
            }
            break;
        case '%':
            if(num2 != 0) {
                int int_num1 = (int)num1;
                int int_num2 = (int)num2;
                int int_result = int_num1 % int_num2;
                printf("%d %% %d = %d", int_num1, int_num2, int_result);
            } else {
                printf("Error! Division by zero.");
            }
            break;      
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
 }