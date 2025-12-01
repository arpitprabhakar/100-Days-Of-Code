//Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n, i;
    int even_count = 0, odd_count = 0;
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
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("The number of even elements in the array is: %d\n", even_count);
    printf("The number of odd elements in the array is: %d\n", odd_count);
    
    return 0;
}