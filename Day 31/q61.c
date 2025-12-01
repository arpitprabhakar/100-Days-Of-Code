//Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, i, target;
    int found = 0; 
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

    printf("Enter the element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = 1; // Element found
            break;
        }
    }

    if(found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}