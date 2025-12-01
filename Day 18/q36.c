// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main()
{
    int n1, n2, hcf;
    printf("Enter your first num ");
    scanf("%d", &n1);
    printf("Enter your second num ");
    scanf("%d", &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF:%d", hcf);
    return 0;
}