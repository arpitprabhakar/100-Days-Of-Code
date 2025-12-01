/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
*/

 #include<stdio.h>
  int main(){
    int grade;

    scanf("%d", &grade);

    if(grade<=100 && grade>=90) {
        printf("A");
    }
    else if(grade<=89 && grade>=80) {
        printf("B");
    }
    else if(grade<=79 && grade>=70) {
        printf("C");
    }
    else if(grade<=69 && grade>=60) {
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
  }