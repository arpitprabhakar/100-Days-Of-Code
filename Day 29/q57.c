//Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    int arr[100]; 
    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n <= 0 || n > 100) {
        printf("Number of elements must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);
    
    return 0;
}