//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>  
int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Series: ");
    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        
        // Print the current term
        printf("%d/%d", numerator, denominator);
        if(i < n) {
            printf(" + ");
        }
        
        // Update numerator and denominator for next term
        numerator += 2;    // Increment by 2 (2,4,6,8,...)
        denominator += 4;  // Increment by 4 (3,7,11,15,...)
    }
    
    printf("\nSum of the series = %.4f\n", sum);
    
    return 0;
}