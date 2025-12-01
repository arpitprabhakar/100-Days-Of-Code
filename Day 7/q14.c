//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
  int main(){
    char alp;
    scanf(" %c",&alp);
    if((alp == 'a') || (alp == 'e') || (alp == 'i') || (alp == 'o') || (alp == 'u') ||
       alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U'){
       printf("%c is a vowel.\n", alp);
    }
    else{
      printf("%c is a consonant.\n", alp);  
    }
    return 0;
  }
    