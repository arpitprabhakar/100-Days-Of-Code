//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, i, j, element;
    printf("Enter the number of elements in the sorted array: ");
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
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Find the position to insert the new element
    int pos = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (j = n; j > pos; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element
    arr[pos] = element;
    n++; // Increase the size of the array

    printf("The array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}