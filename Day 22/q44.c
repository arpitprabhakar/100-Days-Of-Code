//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 4;
    
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
        numerator += 2;    // Increment by 2 (1,3,5,7,...)
        denominator += 2;  // Increment by 2 (4,6,8,10,...)
    }
    
    printf("\nSum of the series = %.4f\n", sum);
    
    return 0;
}
