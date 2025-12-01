//Merge two arrays.

#include <stdio.h>
int main() {   
    int n1, n2, i, j;
    printf("Enter the number of elements in the first array: ");
    int arr1[100], arr2[100], merged[200]; 
    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n1 <= 0 || n1 > 100) {
        printf("Number of elements must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n2 <= 0 || n2 > 100) {
        printf("Number of elements must be between 1 and 100.\n");
        return 1;
    }
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging the two arrays
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("The merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}