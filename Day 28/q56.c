//Read and print elements of a one-dimensional array.

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
        int arr[100]; 
        printf("Enter the number of elements (max 100): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    printf("Enter %d elements:\n", n);
        if (n <= 0 || n > 100) {
            printf("Number of elements must be between 1 and 100.\n");
            return 1;
        }
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}